//
// Created by Jon on 12/7/2020.
//

#ifndef HW6_GAMEPLAY_H
#define HW6_GAMEPLAY_H

#include "gameboard.h"
//rename
class Game {
private:
    Board *playerBoard;
    Board *computerBoard;
    bool guesses[10][10];
public:
    Game();
    bool guess();
    bool computerGuess();
    void play(int turns);
};


#endif //HW6_GAMEPLAY_H
