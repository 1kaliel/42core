#include "so_long.h"

int handle_keypress(int keycode, t_game *game)
{
    if (keycode == 53) // ESC key to close the game
        close_window(game);

    if (keycode == 13) // W key (move up)
        game->player_y -= 1;
    else if (keycode == 1) // S key (move down)
        game->player_y += 1;
    else if (keycode == 0) // A key (move left)
        game->player_x -= 1;
    else if (keycode == 2) // D key (move right)
        game->player_x += 1;

    // Check for collisions, collectibles, etc.
    game->moves++;
    printf("Moves: %d\n", game->moves);
    return (0);
}
