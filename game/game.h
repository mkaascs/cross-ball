#ifndef GAME_H
#define GAME_H
#include <stdbool.h>
#include <stdint.h>

#define BOARD_SIZE 3

typedef enum {
    Cross, Ball
} Player;

typedef struct {
    Player currentPlayer;
    uint16_t balls_moves;
    uint16_t crosses_moves;

    bool (*checkWin)();
} Game;

void run_game(Game*);

#endif //GAME_H
