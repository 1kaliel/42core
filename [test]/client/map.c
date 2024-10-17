#include "so_long.h"

#include "so_long.h"

int check_valid_map(char *map_file)
{
    int fd = open(map_file, O_RDONLY);
    char *line;
    int line_len = -1;

    if (fd < 0)
        return (0); // Could not open the file

    while (get_next_line(fd, &line) > 0)
    {
        if (line_len == -1)
            line_len = ft_strlen(line); // Set the first line length
        else if (ft_strlen(line) != line_len)
        {
            free(line);
            return (0); // Map is not rectangular
        }

        // Add further validations: check for walls, valid characters (0, 1, C, E, P)
        // Also, ensure at least 1 exit, 1 player, and 1 collectible
        free(line);
    }

    close(fd);
    return (1); // If all validations pass, return 1
}


void render_map(t_game *game)
{
    int x, y;

    y = 0;
    while (game->map[y])
    {
        x = 0;
        while (game->map[y][x])
        {
            if (game->map[y][x] == '1') // Wall
                mlx_put_image_to_window(game->mlx, game->win, game->wall_img, x * 32, y * 32);
            else if (game->map[y][x] == 'C') // Collectible
                mlx_put_image_to_window(game->mlx, game->win, game->collect_img, x * 32, y * 32);
            else if (game->map[y][x] == 'E') // Exit
                mlx_put_image_to_window(game->mlx, game->win, game->exit_img, x * 32, y * 32);
            x++;
        }
        y++;
    }
    // Render player last so it appears above other elements
    mlx_put_image_to_window(game->mlx, game->win, game->player_img, game->player_x * 32, game->player_y * 32);
}
