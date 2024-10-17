#include "so_long.h"

void init_game(t_game *game, char *map_file)
{
    game->mlx = mlx_init();
    if (!game->mlx)
        handle_error("Failed to initialize MLX.");
    
    game->win = mlx_new_window(game->mlx, WINDOW_WIDTH, WINDOW_HEIGHT, "So Long!");
    if (!game->win)
        handle_error("Failed to create window.");

    game->map = NULL;
    if (!check_valid_map(map_file))
        handle_error("Invalid map file.");

    game->collect_count = 0;
    game->moves = 0;
    // Load images and other resources here...
}

#include "so_long.h"

void handle_error(char *message)
{
    ft_printf("Error\n%s\n", message); // Print error message using your ft_printf
    exit(1); // Exit the program
}

void free_game(t_game *game)
{
    if (game->map)
    {
        int i = 0;
        while (game->map[i])
            free(game->map[i++]); // Free each row of the map
        free(game->map); // Free the map itself
    }

    // Free other resources if needed, e.g., images
    if (game->player_img)
        mlx_destroy_image(game->mlx, game->player_img);
    if (game->wall_img)
        mlx_destroy_image(game->mlx, game->wall_img);
    if (game->collect_img)
        mlx_destroy_image(game->mlx, game->collect_img);
    if (game->exit_img)
        mlx_destroy_image(game->mlx, game->exit_img);

    if (game->win)
        mlx_destroy_window(game->mlx, game->win);

    // Free the mlx instance if needed
    // mlx_destroy_display(game->mlx); // Uncomment if required by your MLX version
}

