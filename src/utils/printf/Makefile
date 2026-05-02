NAME := libftprintf.a

LIBFT_DIR := libft

LIBFT := ${LIBFT_DIR}/libft.a

SRCS := ft_printf.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putchar.c \
		ft_putnbr_unsigned.c \
		ft_putnbr_base.c \




OBJ := $(SRCS:.c=.o)

CFLAGS := -Wall -Wextra -Werror



all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(OBJ): %.o: %.c
	gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $@ $^

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re
