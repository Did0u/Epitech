##
## Makefile for makfile in /root/rendu/c/projet/projet_s2/Piscine_synthese/FASTAtools
## 
## Made by Pierre-Alexandre CAILLAT
## Login   <cailla_p@epitech.net>
## 
## Started on  Tue Jun 21 13:30:20 2016 Pierre-Alexandre CAILLAT
## Last update Tue Jun 21 13:30:20 2016 Pierre-Alexandre CAILLAT
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall -Werror
#CFLAGS	+= -pedantic
CFLAGS	+= -I.

LDFLAGS	=

NAME	= FASTAtools

SRCS	= main.c \
	  options.c \
	  tools.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME) $(NAME1)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
