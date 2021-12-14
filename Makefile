SRC        =        main.c        \

NAME        =        guessing_game

OBJ        =        $(SRC:.c=.o)

all:    $(NAME)

$(NAME):    $(OBJ)
				gcc $(SRC) -o $(NAME)
clean:
				rm -f *.o
				rm -f $(NAME)
fclean: clean
				rm -f *.gcno
				rm -f *.gcda
re: fclean all
