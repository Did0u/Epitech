##
## Makefile for cailla_p in /root/rendu/c/projet/projet_s2/CPE_2015_Allum1
## 
## Made by Pierre-Alexandre CAILLAT
## Login   <cailla_p@epitech.net>
## 
## Started on  Sun Feb 21 14:36:13 2016 Pierre-Alexandre CAILLAT
## Last update Sun Feb 21 14:36:13 2016 Pierre-Alexandre CAILLAT
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall -Werror
#CFLAGS	+= -pedantic
CFLAGS	+= -I.

LDFLAGS	=

NAME	= allum1

SRCS	= main.c \
	  get_next_line.c \
	  tab_tools.c \
	  ia_tools.c \
	  error_tools.c \
	  str_tools.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME) $(NAME1)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
