/*
** my.h for my.h in /root/rendu/c/projet/alum1
** 
** Made by Pierre-Alexandre CAILLAT
** Login   <cailla_p@epitech.net>
** 
** Started on  Fri Feb 12 05:05:41 2016 Pierre-Alexandre CAILLAT
** Last update Fri Feb 12 05:05:41 2016 Pierre-Alexandre CAILLAT
*/

#ifndef MY_H_
# define MY_H_

typedef struct	s_info
{
  int	*tab;
  int	space;
  int	line;
  int	matches;
  char	*c_line;
  char	*c_matches;
}		t_info;

int	check_max_pipe(t_info *stat, int line);
int	exec_pros(t_info *stat);
int	user_turn(t_info *str);
void	ia_gen_stat(t_info *stat);
void	my_putchar(char c);
int	init_stat(t_info *stat);
void	aff_line(t_info *stat, int nb_line);
void	aff_tab(t_info *stat);
void	edit_tab(t_info *stat);
int	my_get_nbr(char *nbr);
int	check_error_line(t_info *stat);
int	check_error_matches(t_info *stat);
int	check_error_c(t_info *stat, char *str);
void	aff_stat(t_info *stat, int option);
int	check_win(t_info *stat, int player);
int	my_strlen(char *str);
void	my_putstr(char *str);
char	*get_next_line(const int fd);
char	*do_whenisfinish(char *line, int len);
char	*my_init_realloc(char	*buffer, int size_buffer);
int	check_only_space(t_info *stat, char *str);

#endif /* !MY_H_ */
