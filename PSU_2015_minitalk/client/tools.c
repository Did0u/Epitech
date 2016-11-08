/*
** fun_client.c for funclient.c in /root/rendu/c/projet/PSU_2015_minitalk
** 
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
** 
** Started on  Tue Feb  2 00:06:14 2016 Pierre-Alexandre CAILLAT
** Last update Tue Feb  2 00:06:14 2016 Pierre-Alexandre CAILLAT
*/

#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include "client.h"

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
      idx++;
    }
}

int	my_atoi(char *str)
{
  int	idx;
  int	nb;

  idx = 0;
  nb = 0;
  if (!(str))
    return (0);
  while (str[idx] >= 48 && str[idx] <= 57)
    {
      nb *= 10;
      nb += ((int)str[idx] - 48);
      idx++;
    }
  return (nb);
}

int	my_strlen(char *str)
{
  int	idx;

  idx = 0;
  while (str[idx] != '\0')
      idx++;
  return (idx);
}

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  if (nb >= 10)
    my_put_nbr(nb / 10);
  my_putchar((nb % 10) + '0');
  return (0);
}
