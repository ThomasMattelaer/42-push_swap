NAME    := push_swap

SRCS    := main.c \ parser.c \ stack.c \ operations.c
OBJ     := $(SRCS:.c=.o)

CFLAGS  := -Wall -Wextra -Werror

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
