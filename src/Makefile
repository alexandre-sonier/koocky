CC	=cc
CFLAGS	=-W -Werror -Wstrict-prototypes -Wall -pedantics
NAME	=exec
SRC	=testdir/a.c 
OBJ	=$(SRC:.c=.o)
RM	=rm -rf

all:
	$(CC) -o $(NAME) $(SRC)
		@printf "Executable generated \n" 

clean:
	$(RM) *.o *~c *#

fclean:
	$(RM) $(NAME)

re:	clean fclean all
