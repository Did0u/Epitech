/*
** options.c for options.c in /root/rendu/c/projet/projet_s2/Piscine_synthese/FASTAtools
**
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
**
** Started on  Tue Jun 21 11:40:11 2016 Pierre-Alexandre CAILLAT
** Last update Tue Jun 21 11:40:11 2016 Pierre-Alexandre CAILLAT
*/

#include <stdio.h>
#include <stdlib.h>
#include "fasta.h"

int	check_conditions(t_para *params)
{
  if (params->str[params->idx] != 'A' && params->str[params->idx] != 'a'
      && params->str[params->idx] != 'T' && params->str[params->idx] != 't'
      && params->str[params->idx] != 'G' && params->str[params->idx] != 'g'
      && params->str[params->idx] != 'C' && params->str[params->idx] != 'c'
      && params->str[params->idx] != 'N' && params->str[params->idx] != 'n')
    return (1);
  return (0);
}

void	print_option_one(t_para *params)
{
  while (params->str[params->idx] != '\0')
    {
      if (check_conditions(params))
	params->idx++;
      else if (params->str[params->idx] >= 'a' &&
	  params->str[params->idx] <= 'z')
	{
	  my_putchar((params->str[params->idx] =
		      params->str[params->idx] + ('A' - 'a')));
	  params->idx++;
	}
      else
	{
	  my_putchar(params->str[params->idx]);
	  params->idx++;
	}
    }
  params->idx = 0;
}

void	print_option_two(t_para *params)
{
  while (params->str[params->idx] != '\0')
    {
      if (check_conditions(params))
	params->idx++;
      else if (params->str[params->idx] == 't' || params->str[params->idx] == 'T')
	{
	  params->idx++;
	  my_putchar('U');
	}
      else if (params->str[params->idx] >= 'a' &&
	       params->str[params->idx] <= 'z')
	{
	  my_putchar((params->str[params->idx] =
		      params->str[params->idx] + ('A' - 'a')));
	  params->idx++;
	}
      else
	{
	  my_putchar(params->str[params->idx]);
	  params->idx++;
	}
    }
  params->idx = 0;
}

void	print_option(t_para *params)
{
  while ((params->str = get_next_line(0)))
    {
      if (params->str[0] == '>')
	{
	  if (params->stat == 1)
	    my_putchar('\n');
	  params->stat = 1;
	  my_putstr(params->str);
	  my_putchar('\n');
	}
      else if (params->option == 1 && params->stat == 1)
	print_option_one(params);
      else if (params->option == 2 && params->stat == 1)
	print_option_two(params);
    }
  my_putchar('\n');
}
