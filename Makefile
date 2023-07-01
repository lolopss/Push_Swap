NAME = push_swap

CC = gcc -Werror -Wall -Wextra -g

RM = rm -rf

SRC = 		src/init_list.c	\
		src/init_index.c	\
		src/les_problemes.c	\
		src/algo.c		\
		src/push.c		\
		src/push_swap.c	\
		src/rotate_utils.c	\
		src/rotate.c		\
		src/lst_utils.c	\
		src/reverse_rotate.c	\
		src/swap.c		\
		src/check.c		\
		libft/libft.a		\
		libft/ft_printf/printf.a
		
all : $(NAME)

$(NAME) :
	make -s all -C libft
	$(CC) $(SRC) -o $(NAME)

fclean : clean
	$(RM) $(NAME)
	make fclean -s -C libft

clean:
	$(RM) $(NAME)
	$(RM) src/*.o
	$(RM) src_b/*.o
	make -s clean -C libft

re : fclean all

