/*
** server.c for server.c in /root/rendu/c/projet/Minitalk/server
** 
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
** 
** Started on  Sat Feb 13 12:26:35 2016 Pierre-Alexandre CAILLAT
** Last update Sat Feb 13 12:26:35 2016 Pierre-Alexandre CAILLAT
*/

#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <stdlib.h>
#include "server.h"

void	oct1()
{
  rec_signal(1);
}

void	oct2()
{
  rec_signal(0);
}

int	rec_signal(int bin)
{
  static t_allin info;

  info.c += (bin << info.i++);
  if (info.i > 22)
    {
      info.pid = info.c;
      info.c = 0;
      info.i = 0;
    }
  rec_signal_cond(&info);
  if (info.pid > 0)
    {
      if (kill(info.pid, SIGUSR1) == -1)
	exit(0);
    }
  return (0);
}

int	rec_signal_cond(t_allin *info)
{
  if (info->pid > 0)
    {
      if (info->i > 7)
	{
	  if (info->c > 0)
	    my_putchar(info->c);
	  else
	    {
	      if (kill(info->pid, SIGUSR1) == -1)
		  exit(0);
	    }
	  if (info->c == 0)
	    {
	      info->pid = 0;
	    }
	  info->c = 0;
	  info->i = 0;
	}
    }
  return (0);
}

int	main()
{
  int	aff_pid;

  aff_pid = getpid();
  my_put_nbr(aff_pid);
  while (42)
    {
      if (signal(SIGUSR1, oct1) == SIG_ERR)
	exit(0);
      if (signal(SIGUSR2, oct2) == SIG_ERR)
	exit(0);
      pause();
    }
  return (0);
}
