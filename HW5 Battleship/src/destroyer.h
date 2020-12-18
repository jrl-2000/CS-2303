//
// Created by Jon on 12/7/2020.
//

#ifndef HW6_DESTROYER_H
#define HW6_DESTROYER_H


#include "Ship.h"

class Destroyer: public Ship{
public:
    Destroyer(int row, int col, int direction);
    int getLength();
    char toChar(int row, int col);
};


#endif //HW6_DESTROYER_H
