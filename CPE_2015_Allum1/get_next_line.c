/*
** get_next_line.c for get_next_line.c in /root/rendu/c/projet/get_next_line
**
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
**
** Started on  Sun Jan 17 17:44:24 2016 Pierre-Alexandre CAILLAT
** Last update Sun Jan 17 17:44:24 2016 Pierre-Alexandre CAILLAT
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include "my.h"

char	*my_init_realloc(char *buffer, int size_buffer)
{
  int	idx;
  char	*buffer_return;

  idx = 0;
  if (size_buffer == 0 && ((buffer = malloc(1 + 1)) == NULL))
    return (NULL);
  if (size_buffer == 0)
    return (buffer);
  if ((buffer_return = malloc(size_buffer + 1 + 1)) == NULL )
    return (NULL);
  while (idx <= size_buffer)
    {
      buffer_return[idx] = buffer[idx];
      idx++;
    }
  buffer_return[idx] = '\0';
  free(buffer);
  return (buffer_return);
}

char		*do_whenisfinish(char *line, int len)
{
  static int	stat;

  if (len == 0)
    return (NULL);
  if (stat == 0)
    {
      stat = 1;
      return (line);
    }
  else
    return (NULL);
}

char		*get_next_line(const int fd)
{
  static char	buffer[1];
  static int	idx;
  static int	len;
  static int	readed;
  static char	*line;

  if (idx == 0 && (readed = read(fd, buffer, 1)) == 0)
    return (do_whenisfinish(line, len));
  if ((line = my_init_realloc(line, len)) == NULL)
    return (NULL);
  while (idx < readed)
    {
      if (buffer[idx] == '\0')
	return (NULL);
      else if (buffer[idx] == '\n')
	{
	  idx++;
	  line[len] = '\0';
	  len = 0;
	  return (line);
	}
      line[len++] = buffer[idx++];
    }
  idx = 0;
  return (get_next_line(fd));
}
