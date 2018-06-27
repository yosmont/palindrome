##
## EPITECH PROJECT, 2018
## yet another Makefile
## File description:
## not a copy of a exemple Makefile... not at all
##

NAME	=	palindrome

SRC	=	src/main.c		\
		src/getoptprog.c	\
		src/stringmod.c		\
		src/number.c

CFLAGS	+=	-Wall -Wextra -Iinclude/ -O2

DFLAG	+=	-g

OBJ	=	$(SRC:.c=.o)

all:		$(OBJ)
	gcc $(OBJ) -o $(NAME) $(CFLAGS)
	@echo "┌─┐┌┐┌┌┬┐  ┌─┐┌─┐┌┬┐┌─┐┬┬  ┬┌┐┌┌─┐   ┬ ┬┌─┐┌┬┐┬"
	@echo "├┤ │││ ││  │  │ ││││├─┘││  │││││ ┬   └┬┘├─┤││││"
	@echo "└─┘┘└┘─┴┘  └─┘└─┘┴ ┴┴  ┴┴─┘┴┘└┘└─┘┘   ┴ ┴ ┴┴ ┴o"

clean:
	rm -f $(OBJ)
	@echo "┌─┐┌┐┌┌┬┐  ┌─┐┬  ┌─┐┌─┐┌┐┌   ┬ ┬┌─┐┌┬┐┬"
	@echo "├┤ │││ ││  │  │  ├┤ ├─┤│││   └┬┘├─┤││││"
	@echo "└─┘┘└┘─┴┘  └─┘┴─┘└─┘┴ ┴┘└┘┘   ┴ ┴ ┴┴ ┴o"

fclean:		clean
	rm -f $(NAME)
	@echo "┌─┐┌┐┌┌┬┐  ┌─┐┌─┐┬  ┌─┐┌─┐┌┐┌   ┬ ┬┌─┐┌┬┐┬"
	@echo "├┤ │││ ││  ├┤ │  │  ├┤ ├─┤│││   └┬┘├─┤││││"
	@echo "└─┘┘└┘─┴┘  └  └─┘┴─┘└─┘┴ ┴┘└┘┘   ┴ ┴ ┴┴ ┴o"

re:		fclean all
	@echo "┌─┐┌┐┌┌┬┐  ┬─┐┌─┐   ┬ ┬┌─┐┌┬┐┬"
	@echo "├┤ │││ ││  ├┬┘├┤    └┬┘├─┤││││"
	@echo "└─┘┘└┘─┴┘  ┴└─└─┘┘   ┴ ┴ ┴┴ ┴o"

tests_run:
	make -C tests
	./tests/tests
	@echo "┌─┐┌┐┌┌┬┐  ┬─┐┬ ┬┌┐┌┌┐┌┬┌┐┌┌─┐  ┌┬┐┌─┐┌─┐┌┬┐  ┬ ┬┌─┐┌┬┐┬"
	@echo "├┤ │││ ││  ├┬┘│ ││││││││││││ ┬   │ ├┤ └─┐ │   └┬┘├─┤││││"
	@echo "└─┘┘└┘─┴┘  ┴└─└─┘┘└┘┘└┘┴┘└┘└─┘   ┴ └─┘└─┘ ┴┘   ┴ ┴ ┴┴ ┴o"

bonus:
	cd bonus; make; make clean
	mv bonus/palindrome_bonus palindrome_bonus
	@echo "┌─┐┌┐┌┌┬┐ ┌─┐┌─┐┌┬┐┌─┐┬┬  ┬┌┐┌┌─┐  ┌┐ ┌─┐┌┐┌┬ ┬┌─┐   ┬ ┬┌─┐┌┬┐┬"
	@echo "├┤ │││ ││ │  │ ││││├─┘││  │││││ ┬  ├┴┐│ │││││ │└─┐   └┬┘├─┤││││"
	@echo "└─┘┘└┘─┴┘ └─┘└─┘┴ ┴┴  ┴┴─┘┴┘└┘└─┘  └─┘└─┘┘└┘└─┘└─┘┘   ┴ ┴ ┴┴ ┴o"

.PHONY:		all clean fclean re bonus tests_run
