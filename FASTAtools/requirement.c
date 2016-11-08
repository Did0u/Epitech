/*
** requirement.c for requirement.c in /root/rendu/c/projet/projet_s2/Piscine_synthese/FASTAtools
** 
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
** 
** Started on  Mon Jun 20 10:13:03 2016 Pierre-Alexandre CAILLAT
** Last update Mon Jun 20 10:13:03 2016 Pierre-Alexandre CAILLAT
*/

char	*my_strcapitalize_synthesis(char *str)
{
  int	idx;

  idx = 0;
  while (str[idx] != 0)
    {
      if (str[idx] >= 'A' && str[idx] <= 'Z')
	str[idx] = str[idx] + ('a' - 'A');
      if (((idx == 0) ||
	   ((str[idx - 1] < 'a' || str[idx - 1] > 'z') &&
	    (str[idx - 1] < 'A' || str[idx - 1] > 'Z') &&
	    (str[idx - 1] < '0' || str[idx - 1] > '9'))) &&
	  (str[idx] >= 'a' && str[idx] <= 'z')
	  )
	str[idx] = str[idx] + ('A' - 'a');
      idx++;
    }
  return (str);
}
