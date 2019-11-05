NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRC=*.c
HEAD=*.h
OBJ=*.o

all : $(NAME)
	
$(NAME) :
	$(CC) -I$(HEAD) $(CFLAGS) -c $(SRC)
	ar rc $@ $(OBJ)
	ranlib $@

clean :
	/bin/rm -rf $(OBJ)

fclean : clean
	/bin/rm -rf $(NAME)

re : fclean all
