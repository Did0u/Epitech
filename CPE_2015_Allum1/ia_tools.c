/*
** ia_tools.c for ia_tools.c in /root/rendu/c/projet/alum1
** 
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
** 
** Started on  Fri Feb 19 03:04:39 2016 Pierre-Alexandre CAILLAT
** Last update Fri Feb 19 03:04:39 2016 Pierre-Alexandre CAILLAT
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "my.h"

int	check_max_pipe(t_info *stat, int line)
{
  int	max;

  max = 7;
  while (stat->tab[line] < max)
    max--;
  max++;
  return (max);
}

void	ia_gen_stat(t_info *stat)
{
  int	nbgenline;
  int	max;
  int	min;
  int	nbgenmatches;

  nbgenmatches = 3;
  nbgenline = 1;
  srand(time(NULL));
  while (nbgenmatches > stat->tab[nbgenline])
    {
      if (stat->tab[nbgenline] == 0)
	{
	  min = 1;
	  max = 4;
	  nbgenline = (rand() % (max - min + 1)) + min;
	}
      min = 1;
      max = 7;
      nbgenmatches = (rand() % (max - min + 1)) + min;
    }
stat->line = nbgenline;
stat->matches = nbgenmatches;
}
