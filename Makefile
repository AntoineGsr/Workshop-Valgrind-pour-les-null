##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC1	=	./ex01/main.c
SRC2	=	./ex02/main.c
SRC3	=	./ex03/main.c

NAME1	=	one.out
NAME2	=	two.out
NAME3	=	three.out

OBJ1	=	$(SRC1:.c=.o)
OBJ2	=	$(SRC2:.c=.o)
OBJ3	=	$(SRC3:.c=.o)

CFLAGS	=	-I./include/ -g
CFLAGS	+=	-w #You're authorize to comment this line
#CFLAGS	+=	-Wall -Wextra -Wshadow -Wformat-security #You're authorize to uncomment this line

CC	=	gcc

RULES	=	ex01 ex02 ex03

all:	$(RULES)

ex01:	$(OBJ1)
	$(CC) -o $(NAME1) $(OBJ1) $(CFLAGS)

ex02:	$(OBJ2)
	$(CC) -o $(NAME2) $(OBJ2) $(CFLAGS)

ex03:	$(OBJ3)
	$(CC) -o $(NAME3) $(OBJ3) $(CFLAGS)

clean:
	$(RM) *~
	$(RM) ./ex01/*.o
	$(RM) ./ex02/*.o
	$(RM) ./ex03/*.o

fclean:	clean
	$(RM) $(NAME1)
	$(RM) $(NAME2)
	$(RM) $(NAME3)

re:	fclean all

.Phony: all clean fclean re