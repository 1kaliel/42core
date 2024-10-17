NAME = so_long

CC = cc
CFLAGS = -Wall -Wextra -Werror

#Directories
SRCDIR = client
OBJDIR = obj
INCDIR = include

# Libraries
LIBFT = include/libft/libft.a
PRINTF = include/ft_printf/libftprintf.a
MLX = include/minilibx/libmlx.a

# Source files
SRC = $(SRCDIR)/main.c \
      $(SRCDIR)/game.c \
      $(SRCDIR)/map.c \
      $(SRCDIR)/input.c \
      $(SRCDIR)/render.c

OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

all: $(LIBFT) $(PRINTF) $(MLX) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I $(INCDIR) -o $(NAME) $(OBJ) $(LIBFT) $(PRINTF) $(MLX) -libmlx

$(LIBFT):
	make -C include/libft

$(PRINTF):
	make -C include/ft_printf

$(MLX):
	make -C include/minilibx

clean:
	rm -rf $(OBJDIR)
	make -C include/libft clean
	make -C include/ft_printf clean
	make -C include/minilibx clean

fclean: clean
	rm -rf $(NAME)
	make -C include/libft fclean
	make -C include/ft_printf fclean
	make -C include/minilibx fclean

re: fclean all
