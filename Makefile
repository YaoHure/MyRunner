##
## EPITECH PROJECT, 2018
## Huré Yaowanart
## File description:
## Makefile
##

SRC	=	./src/blackground.c				\
		./src/main.c					\
		./src/parallax.c				\
		./src/window.c					\
		./src/my_strcmp.c				\
		./src/my_strlen.c				\
		./src/my_itoa.c					\
		./src/my_revstr.c				\
		./src/my_first_int_len.c		\
		./src/destroy.c					\
		./src/perso.c					\
		./src/song.c					\
		./src/display_text.c			\
		./src/bomb.c					\

OBJ	= $(SRC:.c=.o)

CFLAGS = -W -Wall -Wextra

CGRAPH = -l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio

all:
		gcc $(SRC) -o my_runner $(CGRAPH) $(CFLAGS)
clean:
		rm -f $(OBJ) *~

fclean:	clean
		rm -f $(NAME)

re:		fclean all
