NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c get_forma.c print_forma.c print_forma2.c print_forma_utils.c print_forma_utils2.c
OBJ = $(SRC:.c=.o)

all:$(NAME)

$(NAME):$(OBJ)

.c.o:
	$(CC) $(CFLAGS) -c $<
	ar -rc $(NAME) $@
clean:
	rm -f $(OBJ)
fclean:clean
	rm -f $(NAME)
re:fclean all
	
