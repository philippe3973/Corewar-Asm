##
## Makefile for Makefile in /u/all/rajkou_p/rendu/lib/my
## 
## Made by philippe rajkoumar
## Login   <rajkou_p@epitech.net>
## 
## Started on  Mon Oct 24 09:15:02 2011 philippe rajkoumar
## Last update Sun Dec 18 16:09:23 2011 philippe rajkoumar
##

NAME=		libmy.a

CFLAGS=		-W -Wall -ansi -pedantic
CFLAGS=		-I . -I ../xfunc/ -I ../include
DIRX=		../xfunc/

SRC=		my_getnbr.c		\
		my_isneg.c		\
		my_putchar.c		\
		my_put_nbr.c		\
		my_putstr.c		\
		my_revstr.c		\
		my_show_wordtab.c	\
		my_strcmp.c		\
		my_strcpy.c		\
		my_str_isalpha.c	\
		my_str_isnum.c		\
		my_strlen.c		\
		my_strncmp.c		\
		my_strncpy.c		\
		my_strdup.c		\
		my_strcat.c		\
		put_stderr.c		\
		free_tab.c		\
		my_str_to_wordtab.c	\
		my_tab_len.c		\
		my_errno.c		\
		is_char_exist_in_str.c	\
		epur_str.c		\
		my_getnbr_unsigned.c	\
		$(DIRX)xwrite.c		\
		$(DIRX)xmalloc.c	\
		$(DIRX)xread.c		\
		$(DIRX)xclose.c		\
		$(DIRX)xopen.c		\

OBJ=		$(SRC:.c=.o)

RM=		rm -f

$(NAME):	$(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

all:		$(NAME)

clean:		
		@$(RM) $(OBJ)

fclean:		clean
		@$(RM) $(NAME)

re:		fclean all