//
// Created by Jon on 12/7/2020.
//

#ifndef HW6_BATTLESHIP_H
#define HW6_BATTLESHIP_H
#include"ship.h"


class Battleship: public Ship {
public:
    Battleship(int row, int col, int direction);
    int getLength();
    char toChar(int row, int col);
};


#endif //HW6_BATTLESHIP_H
