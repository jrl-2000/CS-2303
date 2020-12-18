//
// Created by Jon on 12/7/2020.
//

#ifndef HW6_SUB_H
#define HW6_SUB_H
#include "Ship.h"
class Submarine: public Ship {
public:
    Submarine(int row, int col, int direction);
    int getLength();
    char toChar(int row, int col);
};
#endif //HW6_SUB_H
