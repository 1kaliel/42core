#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include "libft/libft.h"
# include "ft_printf/includes/ft_printf.h"
# include "minilibx/mlx.h"

// Define your game's constants
# define WINDOW_WIDTH 800
# define WINDOW_HEIGHT 600

// Structure to store game data
typedef struct s_game
{
    void    *mlx;
    void    *win;
    void    *player_img;
    void    *wall_img;
    void    *collect_img;
    void    *exit_img;
    int     player_x;
    int     player_y;
    int     collect_count;
    int     moves;
    char    **map;
}   t_game;

// Function prototypes
void    init_game(t_game *game, char *map_file);
void    render_map(t_game *game);
void    handle_input(int keycode, t_game *game);
void    free_game(t_game *game);
int     check_valid_map(char *map_file);
void    handle_error(char *message);
int		handle_keypress(int keycode, t_game *game);

#endif
