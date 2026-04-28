NAME    := push_swap
LIBFT   := libft/libft.a

SRCS    := main.c \ parser.c \ stack.c \ operations.c
OBJ     := $(SRCS:.c=.o)

CFLAGS  := -Wall -Wextra -Werror
INCLUDES := -I. -Ilibft
all: $(NAME)

$(LIBFT):
    make -C libft

$(OBJ): %.o: %.c
    gcc $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(LIBFT) $(OBJ)
    gcc $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

clean:
    rm -f $(OBJ)
    make -C libft clean

fclean:
    rm -f $(OBJ) $(NAME)
    make -C libft fclean

re: fclean all

.PHONY: all clean fclean re
