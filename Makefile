NAME		:= push_swap

SRCS		:=	src/main.c \
				src/parser.c \
				src/compute_disorder.c \
				src/operations/push.c \
				src/operations/reverse_rotate_a_b.c \
				src/operations/reverse_rotate.c \
				src/operations/rotate_a_b.c \
				src/operations/rotate.c \
				src/operations/swap_a_b.c \
				src/operations/swap.c \
				src/sorting/simple_sort.c \
				src/utils/ft_atoi.c \
				src/utils/ft_isdigit.c \
				src/utils/ft_lstadd_back.c \
				src/utils/ft_lstlast.c \
				src/utils/ft_lstnew.c \
				src/utils/ft_putstr.c \
				src/utils/ft_split.c \
				src/utils/stack_size.c

OBJ			:= $(SRCS:.c=.o)
CFLAGS  := -Wall -Wextra -Werror -I include

all: $(NAME)

$(OBJ): %.o: %.c
	gcc $(CFLAGS) -c $< -o $@

$(NAME): $(LIBFT) $(OBJ)
	gcc $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re
