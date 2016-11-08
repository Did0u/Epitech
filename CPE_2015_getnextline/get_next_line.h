/*
** get_next_line.h for get_next_line.h in /root/rendu/c/projet/get_next_line
** 
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
** 
** Started on  Sun Jan 17 17:40:44 2016 Pierre-Alexandre CAILLAT
** Last update Sun Jan 17 17:40:44 2016 Pierre-Alexandre CAILLAT
*/
#ifndef READ_SIZE
# define READ_SIZE (14)

char	*do_whenisfinish(char *line, int len);
char	*my_init_realloc(char *buffer, int size_buffer);
char	*get_next_line(const int fd);

#endif /* !READ_SIZE */
