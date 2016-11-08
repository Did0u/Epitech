/*
** tab_tools.c for tab_tools.c in /root/rendu/c/projet/alum1
** 
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
** 
** Started on  Fri Feb 19 05:00:19 2016 Pierre-Alexandre CAILLAT
** Last update Fri Feb 19 05:00:19 2016 Pierre-Alexandre CAILLAT
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int	init_stat(t_info *stat)
{
  if ((stat->tab = (malloc(4 * 4))) == NULL)
    return (0);
  stat->tab[1] = 1;
  stat->tab[2] = 3;
  stat->tab[3] = 5;
  stat->tab[4] = 7;
  stat->space = 3;
  return (1);
}

void	aff_line(t_info *stat, int line)
{
  int	idx;
  int	len;

  len = 0;
  idx = 0;
  while (idx < stat->space)
    {
      my_putchar(32);
      idx++;
      len ++;
    }
  idx = 0;
  while (idx < stat->tab[line])
    {
      my_putchar('|');
      idx++;
      len++;
    }
  while (len < 7)
    {
      my_putchar(32);
      len++;
    }
}

void	aff_tab(t_info *stat)
{
  int	idx;

  idx = 1;
  my_putstr("*********");
  my_putchar('\n');
  while (idx < 5)
    {
      my_putchar('*');
      aff_line(stat, idx);
      stat->space--;
      idx++;
      my_putchar('*');
      my_putchar('\n');
    }
  stat->space = 3;
  my_putstr("*********");
  my_putchar('\n');
}

void	edit_tab(t_info *stat)
{
  if (stat->matches <= stat->tab[stat->line])
    stat->tab[stat->line] = (stat->tab[stat->line] - stat->matches);
}

void    aff_stat(t_info *stat, int option)
{
  if (option  == 0)
    {
      my_putstr("Player removed ");
      my_putchar(stat->matches + 48);
      my_putstr(" match(es) from line ");
      my_putchar(stat->line + 48);
      my_putchar('\n');
    }
  else
    {
      my_putstr("AI removed ");
      my_putchar(stat->matches + 48);
      my_putstr(" match(es) from line ");
      my_putchar(stat->line + 48);
      my_putchar('\n');
    }
}
