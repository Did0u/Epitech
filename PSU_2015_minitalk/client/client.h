/*
** my.h for my.h in /home/langla_m/Projet/PSU_2015_minitalk/client
** 
** Made by Matéhis Langlais
** Login   <langla_m@epitech.net>
** 
** Started on  Wed Feb 10 09:37:54 2016 Matéhis Langlais
** Last update Wed Feb 10 09:37:55 2016 Matéhis Langlais
*/

#ifndef CLIENT_H_
# define CLIENT_H_

char	*my_binaire(int nombre, int b);
void	send_pid(int c, int pid);
void	send_octet(unsigned char c, int pid);
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_put_nbr(int nb);
int	my_atoi(char *str);
int	my_atoi(char *str);
int	my_strlen(char *str);
void	sig();
void	error();

#endif /* !CLIENT_H_ */
