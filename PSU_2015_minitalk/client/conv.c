/*
** conv.c for conv.c in /root/rendu/c/projet/Minitalk/client
** 
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
** 
** Started on  Fri Feb 12 02:02:01 2016 Pierre-Alexandre CAILLAT
** Last update Fri Feb 12 02:02:01 2016 Pierre-Alexandre CAILLAT
*/

#include <stdlib.h>

char	*my_binaire(int nb, int op)
{
  int	idx;
  int	idx1;
  char	*bin;

  if (op == 0)
    idx1 = 8;
  else
    idx1 = 23;
  if ((bin = malloc(sizeof(char) * (idx1 + 1))) == NULL)
    exit(0);
  bin[idx1] = '\0';
  idx = 0;
  while (idx < idx1)
    {
      if ((nb >> idx) & 1)
	bin[idx] = '1';
      else
	bin[idx] = '0';
      idx++;
    }
  return (bin);
}
