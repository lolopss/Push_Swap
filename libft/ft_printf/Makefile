NAME = printf.a
CC = gcc -Wall -Wextra -Werror
NOR = norminette -R CheckForbiddenSourceHeader
SRC = ft_print_else.c ft_printf.c ft_print_hex.c ft_print_ptr.c ft_print_unsigned.c ft_itoa.c
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all
