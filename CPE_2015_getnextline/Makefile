##
## Makefile for Makefile in /root/rendu/c/projet/get_next_line/CPE_2015_getnextline
## 
## Made by Pierre-Alexandre CAILLAT
## Login   <cailla_p@epitech.net>
## 
## Started on  Sun Jan 17 18:35:00 2016 Pierre-Alexandre CAILLAT
## Last update Sun Jan 17 18:35:00 2016 Pierre-Alexandre CAILLAT
##

AR	=	ar rc

RM	=	rm -f

NAME	=	libmy.a

SRCS	=	get_next_line.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(AR) $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) ../$(NAME)
		$(RM) $(NAME)

re: fclean all

.PHONY: all re
