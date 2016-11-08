/*
** tools.c for tools.c in /root/rendu/c/projet/Minitalk/server
** 
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
** 
** Started on  Sat Feb 13 12:26:53 2016 Pierre-Alexandre CAILLAT
** Last update Sat Feb 13 12:26:53 2016 Pierre-Alexandre CAILLAT
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "server.h"

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * - 1;
    }
  if (nb >= 10)
    my_put_nbr(nb / 10);
  my_putchar((nb % 10) + '0');
  return (0);
}

int	my_atoi(char *str)
{
  int	i;
  int	nbr;

  i = 0;
  nbr = 0;
  if (!(str))
    return (0);
  while ((str[i] >= 48) && (str[i] <= 57))
    {
      nbr *= 10;
      nbr += ((int)str[i] - 48);
      i = i + 1;
    }
  return (nbr);
}

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	idx;

  idx = 0;
  while (str[idx] != '\0')
    {
      my_putchar(str[idx]);
      idx = idx + 1;
    }
}
