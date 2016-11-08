/*
** fasta.h for fasta.h in /root/rendu/c/projet/projet_s2/Piscine_synthese/FASTAtools
** 
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
** 
** Started on  Tue Jun 21 10:50:54 2016 Pierre-Alexandre CAILLAT
** Last update Tue Jun 21 10:50:54 2016 Pierre-Alexandre CAILLAT
*/

#ifndef FASTA_H_
# define FASTA_H_

#ifndef READ_SIZE
# define READ_SIZE (10)
#endif /* !READ_SIZE */

typedef struct	s_para
{
  int	idx;
  char	*str;
  int	stat;
  int	option;
  char	*adn;
  int	id;
}		t_para;

char	*my_init_realloc(char *buffer, int size_buffer);
char	*do_whenisfinish(char *line, int len);
char	*get_next_line(const int fd);
void	my_putchar(char c);
void	my_putstr(char *str);
void	print_option_one(t_para *);
void	print_option_two(t_para *);
void	print_option(t_para *);

#endif /* !FASTA_H */
