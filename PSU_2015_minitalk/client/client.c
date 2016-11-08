/*
** client.c for client.c in /root/rendu/c/projet/Minitalk/client
** 
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
** 
** Started on  Fri Feb 12 01:47:30 2016 Pierre-Alexandre CAILLAT
** Last update Fri Feb 12 01:47:30 2016 Pierre-Alexandre CAILLAT
*/

#include <signal.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include "client.h"

void	sig()
{
}

void	error(int argc)
{
  if (argc == 3)
    {
      if (signal(SIGUSR1, sig) == SIG_ERR)
	{
	  my_putstr("SIGNAL ERROR\n");
	  exit(0);
	}
      if (signal(SIGUSR2, sig) == SIG_ERR)
	{
	  my_putstr("SIGNAL ERROR\n");
	  exit(0);
	}
    }
  else
    exit(0);
}

void	send_octet(unsigned char c, int pid)
{
  int	idx;
  int	dec;
  char	*binaire;

  idx = 0;
  dec = c;
  binaire = my_binaire(dec, 0);
  while (binaire[idx] != '\0')
    {
      if (binaire[idx] == '1')
	{
	  if (kill(pid, SIGUSR1) == -1)
	    exit(0);
	}
      else
	if (kill(pid, SIGUSR2) == -1)
	  exit(0);
      idx++;
      usleep(10000);
    }
}

void	send_pid(int c, int pid)
{
  char *binaire;
  int	idx;

  idx = 0;
  binaire = my_binaire(c, 1);
  while (binaire[idx] != '\0')
    {
      if (binaire[idx] == '1')
	{
	  if (kill(pid, SIGUSR1) == -1)
	    exit(0);
	}
      else
	if (kill(pid, SIGUSR2) == -1)
	  exit(0);
      idx++;
      usleep(100);
    }
}

int	main(int argc, char **argv)
{
  int	pid;
  int	idx;
  int	pidc;

  pid = my_atoi(argv[1]);
  error(argc);
  idx = 0;
  pidc = getpid();
  send_pid(pidc, pid);
  while (argv[2][idx] != '\0')
    {
      send_octet(argv[2][idx], pid);
      idx++;
    }
  send_octet('\0', pid);
  return (0);
}
