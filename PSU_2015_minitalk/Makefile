##
## Makefile for cailla_p in /root/rendu/c/projet/Minitalk
## 
## Made by Pierre-Alexandre CAILLAT
## Login   <cailla_p@epitech.net>
## 
## Started on  Sun Feb 21 18:01:09 2016 Pierre-Alexandre CAILLAT
## Last update Sun Feb 21 18:01:09 2016 Pierre-Alexandre CAILLAT
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall -Werror
#CFLAGS	+= -pedantic
CFLAGS	+= -I.

LDFLAGS	=

NAME	= server/server

NAME1	= client/client

SRCS	= server/tools.c \
	  server/server.c

SRCS1	= client/tools.c \
	  client/conv.c \
	  client/client.c

OBJS	= $(SRCS:.c=.o)

OBJS1	= $(SRCS1:.c=.o)

all: $(NAME) $(NAME1)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

$(NAME1): $(OBJS1)
	$(CC) $(OBJS1) -o $(NAME1) $(LDFLAGS)

clean:
	$(RM) $(OBJS) $(OBJS1)

fclean: clean
	$(RM) $(NAME) $(NAME1)

re: fclean all

.PHONY: all clean fclean re
