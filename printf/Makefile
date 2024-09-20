CC = cc

CFLAGS = -Wall -Wextra -Werror -I./includes/ -g

RM = rm -rf

SRCS = ft_printf.c srcs/print_p.c srcs/print_u.c srcs/print_x.c srcs/print_c.c srcs/print_d.c srcs/print_s.c srcs/ft_itoa_hex.c srcs/utils.c

OBJS = $(SRCS:.c=.o)

LIB_DIR = ./libft
LIBFT = $(LIB_DIR)/libft.a

NAME = libftprintf.a

aall: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)
clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)
fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re