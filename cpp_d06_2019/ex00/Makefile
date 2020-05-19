##
## EPITECH PROJECT, 2020
## c++pool
## File description:
## makefile
##

SRC		=	my_cat.cpp

OBJ		=		$(SRC:.cpp=.o)

NAME	=		my_cat

all:	$(NAME)

$(NAME):		$(OBJ)
	g++ $(OBJ) -o $(NAME) -Wall -Wextra -Werror

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
