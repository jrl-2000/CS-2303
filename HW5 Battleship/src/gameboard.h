//
// Created by Jon on 12/7/2020.
//

#ifndef HW6_GAMEBOARD_H
#define HW6_GAMEBOARD_H


#include "Ship.h"
#include "aircarrier.h"
#include "Battleship.h"
#include "patrolboat.h"
#include "Destroyer.h"
#include "sub.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <time.h>

#define EMPTY 5
#define MISS 6

#define ROWS 10
#define COLS 10

typedef struct {
    int shipNum;
    bool isHit;
} Coordinate;

class Board {
private:
    Ship *ships[5];
    int board[ROWS][COLS];
public:
    Board();
    Board(bool isPlayer);
    bool isValid(int row, int col);
    bool isHit(int row, int col);
    bool isShip(int row, int col);
    void printBoard(bool canView);
    void filePrintBoard(bool canView);
    bool shot(int row, int col);
    bool hasLost();
};



#endif //HW6_GAMEBOARD_H
