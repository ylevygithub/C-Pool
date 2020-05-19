##
## EPITECH PROJECT, 2020
## C++pool
## File description:
## Makefile
##

SRC	=	string_init_destroy.c \
		assign_copy.c \
		append.c \
		at_size.c \
		clear_compare.c \
		str_empty.c \
		find_insert.c

OBJ =	$(SRC:.c=.o)

NAME	=	libstring.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
