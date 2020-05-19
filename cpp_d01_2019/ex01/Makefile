##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC		=	menger.c \
			verif.c \
			main.c

OBJ		=		$(SRC:.c=.o)

NAME	=		menger

all:	$(NAME)

$(NAME):		$(OBJ)
	gcc -std=gnu11 -Wall -Wextra $(OBJ) -o $(NAME)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
