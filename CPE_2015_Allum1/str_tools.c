/*
** tools.c for tools.c in /root/rendu/c/projet/alum1
** 
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
** 
** Started on  Fri Feb 19 04:46:15 2016 Pierre-Alexandre CAILLAT
** Last update Fri Feb 19 04:46:15 2016 Pierre-Alexandre CAILLAT
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void	my_putchar(char c)
{
  write (1, &c, 1);
}

void	my_putstr(char *str)
{
  int	idx;

  idx = 0;
  while (str[idx] != '\0')
    {
      my_putchar(str[idx]);
      idx++;
    }
}

int     my_get_nbr(char *nbr)
{
  int   n;
  int   i;
  int   res;

  n = 1;
  res = 0;
  i = my_strlen(nbr) - 1;
  while (i >= 0)
    {
      if (nbr[i] != 32)
	{
	  res = res + (n * (nbr[i] - 48));
	  n = n * 10;
	}
      i--;
    }
  return (res);
}

int	my_strlen(char *str)
{
  int	idx;

  idx = 0;
  while (str[idx] != '\0')
    idx++;
  return (idx);
}
