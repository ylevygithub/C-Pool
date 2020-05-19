##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##												     

SRC	=	Object.cpp \
		Wrap.cpp \
		Workstation.cpp \
		main.cpp

OBJ	=	$(SRC:.cpp=.o)

NAME	=	Object

CC = clang++

CXXFLAGS = -g -W -Wall -Wextra -std=c++11

RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) 

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
