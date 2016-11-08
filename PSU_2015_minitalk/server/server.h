/*
** my.h for my.h in /root/rendu/c/projet/Minitalk/server
** 
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
** 
** Started on  Sat Feb 13 12:27:05 2016 Pierre-Alexandre CAILLAT
** Last update Sat Feb 13 12:27:05 2016 Pierre-Alexandre CAILLAT
*/

#ifndef SERVER_H_
# define SERVER_H_

typedef struct s_allin
{
  int	pid;
  int	i;
  int	c;
}	       t_allin;

int	my_put_nbr(int nb);
int	my_atoi(char *str);
void	my_putchar(char c);
void	my_putstr(char *str);
void	oct1();
void	oct2();
int	rec_signal(int bin);
int	rec_signal_cond(t_allin *info);

#endif /* !SERVER_H_ */
