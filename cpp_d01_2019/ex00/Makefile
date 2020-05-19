##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC		=	z.c

OBJ		=		$(SRC:.c=.o)

NAME	=		z

all:	$(NAME)

$(NAME):		$(OBJ)
	gcc -std=gnu11 -Wall -Wextra $(OBJ) -o $(NAME)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
