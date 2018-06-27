##
## EPITECH PROJECT, 2018
## palindrome
## File description:
## Makefile for units tests
##

NAME	=	tests

RM	=	rm -f

CC	=	gcc

SRC	=	../src/getoptprog.c	\
		../src/number.c		\
		../src/stringmod.c	\
		basic.c			\
		basic_my.c		\
		basic_mouli.c		\
		basic_mouli_two.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-I ../include/ --coverage

LDFLAGS	+=	-lcriterion

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)
		@echo "┌─┐┌┐┌┌┬┐  ┌─┐┌─┐┌┬┐┌─┐┬┬  ┬┌┐┌┌─┐   ┬ ┬┌─┐┌┬┐┬"
		@echo "├┤ │││ ││  │  │ ││││├─┘││  │││││ ┬   └┬┘├─┤││││"
		@echo "└─┘┘└┘─┴┘  └─┘└─┘┴ ┴┴  ┴┴─┘┴┘└┘└─┘┘   ┴ ┴ ┴┴ ┴o"

all:		$(NAME)

clean:
		$(RM) $(OBJ)
		rm *.gc*
		rm ../src/*.gc*
		@echo "┌─┐┌┐┌┌┬┐  ┌─┐┬  ┌─┐┌─┐┌┐┌   ┬ ┬┌─┐┌┬┐┬"
		@echo "├┤ │││ ││  │  │  ├┤ ├─┤│││   └┬┘├─┤││││"
		@echo "└─┘┘└┘─┴┘  └─┘┴─┘└─┘┴ ┴┘└┘┘   ┴ ┴ ┴┴ ┴o"

fclean:		clean
		$(RM) $(NAME)
		@echo "┌─┐┌┐┌┌┬┐  ┌─┐┌─┐┬  ┌─┐┌─┐┌┐┌   ┬ ┬┌─┐┌┬┐┬"
		@echo "├┤ │││ ││  ├┤ │  │  ├┤ ├─┤│││   └┬┘├─┤││││"
		@echo "└─┘┘└┘─┴┘  └  └─┘┴─┘└─┘┴ ┴┘└┘┘   ┴ ┴ ┴┴ ┴o"

re:		fclean all
		@echo "┌─┐┌┐┌┌┬┐  ┬─┐┌─┐   ┬ ┬┌─┐┌┬┐┬"
		@echo "├┤ │││ ││  ├┬┘├┤    └┬┘├─┤││││"
		@echo "└─┘┘└┘─┴┘  ┴└─└─┘┘   ┴ ┴ ┴┴ ┴o"

.PHONY:		all clean fclean re
