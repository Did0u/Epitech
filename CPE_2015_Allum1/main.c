/*
** main.c for main.c in /root/rendu/c/projet/alum1
**
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
**
** Started on  Mon Feb 15 18:02:37 2016 Pierre-Alexandre CAILLAT
** Last update Mon Feb 15 18:02:37 2016 Pierre-Alexandre CAILLAT
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int	check_win(t_info *stat, int player)
{
  if (stat->tab[1] == 0 && stat->tab[2] == 0)
    {
      if (stat->tab[3] == 0 && stat->tab[4] == 0)
	{
	  if (player == 0)
	    {
	      my_putstr("You lost, too bad..\n\n");
	      return (0);
	    }
	  else if (player == 1)
	    {
	      my_putstr("I lost.. snif.. but I'll get you next time!!\n\n");
	      return (0);
	    }
	}
    }
  return (1);
}

int	exec_pros(t_info *stat)
{
  aff_stat(stat, 0);
  edit_tab(stat);
  aff_tab(stat);
  if (check_win(stat, 0) == 0)
    return (0);
  my_putchar('\n');
  my_putstr("AI turn ...");
  my_putchar('\n');
  ia_gen_stat(stat);
  aff_stat(stat, 1);
  edit_tab(stat);
  aff_tab(stat);
  if (check_win(stat, 1) == 0)
    return (0);
  return (1);
}

int	user_turn(t_info *stat)
{
  while (42)
    {
      my_putchar('\n');
      my_putstr("Line: ");
      if ((stat->c_line = get_next_line(0)) == NULL)
	return (0);
      if (check_error_c(stat, stat->c_line) == 0)
	return (0);
      stat->line = my_get_nbr(stat->c_line);
      if (check_error_line(stat) == 0)
	return (0);
      my_putstr("Matches: ");
      if ((stat->c_matches = get_next_line(0)) == NULL)
	return (0);
      if (check_error_c(stat, stat->c_matches) == 0)
	return (0);
      stat->matches = my_get_nbr(stat->c_matches);
      if (check_error_matches(stat) == 0)
	return (0);
      if (exec_pros(stat) == 0)
	return (0);
      my_putchar('\n');
      my_putstr("Your turn:");
    }
}

int		main()
{
  t_info	stat;

  init_stat(&stat);
  aff_tab(&stat);
  my_putchar('\n');
  my_putstr("Your turn:");
  user_turn(&stat);
  free(stat.tab);
  return (0);
}
