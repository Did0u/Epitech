/*
** tools.c for tools.c in /root/rendu/c/projet/projet_s2/Piscine_synthese/FASTAtools
** 
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
** 
** Started on  Tue Jun 21 11:38:09 2016 Pierre-Alexandre CAILLAT
** Last update Tue Jun 21 11:38:09 2016 Pierre-Alexandre CAILLAT
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "fasta.h"

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
