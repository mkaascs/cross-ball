#include "game.h"

#define WIN_PATTERNS_COUNT 8

Game* game;
const uint16_t WIN_PATTERNS[WIN_PATTERNS_COUNT] = {
    0b111000000,
    0b000111000,
    0b000000111,
    0b100100100,
    0b010010010,
    0b001001001,
    0b100010001,
    0b001010100
};

bool checkWin() {
    uint16_t currentPlayer = game->currentPlayer == Cross
        ? game->crosses_moves
        : game->balls_moves;

    for (int index = 0; index < WIN_PATTERNS_COUNT; index++) {
        if ((currentPlayer & WIN_PATTERNS[index]) == WIN_PATTERNS[index])
            return true;
    }

    return false;
}

void run_game(Game* newGame) {
    newGame->currentPlayer = Cross;

    newGame->crosses_moves = 0;
    newGame->balls_moves = 0;

    newGame->checkWin = checkWin;
    game = newGame;
}