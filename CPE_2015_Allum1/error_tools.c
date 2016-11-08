/*
** error.c for error.c in /root/rendu/c/projet/alum1
**
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
**
** Started on  Mon Feb 15 19:16:44 2016 Pierre-Alexandre CAILLAT
** Last update Mon Feb 15 19:16:44 2016 Pierre-Alexandre CAILLAT
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int	check_error_line(t_info *stat)
{
  if (stat->tab[stat->line] == 0 && stat->line <= 4 && stat->line > 0)
    {
      my_putstr("Error: this line is empty");
      if (user_turn(stat) == 0)
	return (0);
    }
  else if (stat->line < 0)
    {
      my_putstr("Error: invalid input (positive number expected)");
     if (user_turn(stat) == 0)
       return (0);
    }
  else if (stat->line > 4 || stat->line == 0)
    {
      my_putstr("Error: this line is out of range");
      if (user_turn(stat) == 0)
	return (0);
    }
  return (1);
}

int	check_error_c(t_info *stat, char *str)
{
  int	idx;

  idx = 0;
  if (check_only_space(stat, str) == 0)
    return (0);
  while (str[idx] != '\0')
    {
      if (str[idx] < 48 || str[idx] > 57)
	{
	  if (str[idx] != 32)
	    {
	      my_putstr("Error: invalid input (positive number expected)");
	      if (user_turn(stat) == 0)
		return (0);
	    }
	  else
	    idx++;
	}
      else
	idx++;
    }
  return (1);
}

int	check_error_matches(t_info *stat)
{
  if (stat->matches > stat->tab[stat->line])
    {
      my_putstr("Error: not enough matches in this line");
      if (user_turn(stat) == 0)
       return (0);
    }
  else if (stat->matches == 0)
    {
      my_putstr("Error: you have to remove at least one match");
      if (user_turn(stat) == 0)
       return (0);
    }
  return (1);
}

int	check_only_space(t_info *stat, char *str)
{
  int	idx;

  idx = 0;
  while (str[idx] != '\0')
    {
      if (str[idx] != 32)
	return (1);
      idx++;
    }
  if (str[idx] == '\0')
    {
      my_putstr("Error: invalid input (positive number expected)");
      if (user_turn(stat) == 0)
       return (0);
    }
  return (1);
}
