#include "so_long.h"

// Function to close the window and clean up
int close_window(t_game *game)
{
    mlx_destroy_window(game->mlx, game->win);
    free_game(game);
    exit(0);
}

// Main loop for handling inputs and rendering
int main_loop(t_game *game)
{
    render_map(game); // Render the current state of the game
    return (0);
}

// Main function
// Main function
int main(int argc, char **argv)
{
    t_game game;

    if (argc != 2)
        handle_error("Usage: ./so_long <map_file>");
    
    init_game(&game, argv[1]);

    mlx_hook(game.win, 2, 1L << 0, &handle_keypress, &game); // Handle key press
    mlx_loop_hook(game.mlx, &main_loop, &game); // Main loop for rendering
    mlx_hook(game.win, 17, 0, &close_window, &game); // Close window hook
    mlx_loop(game.mlx); // Start the game loop
    return (0);
}
