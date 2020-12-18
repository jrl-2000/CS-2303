//
// Created by Jon on 12/7/2020.
//

#ifndef HW6_PATROLBOAT_H
#define HW6_PATROLBOAT_H
#include "Ship.h"

class PatrolBoat: public Ship {
private:
public:
    PatrolBoat(int row, int col, int direction);
    int getLength();
    char toChar(int row, int col);
};


#endif //HW6_PATROLBOAT_H
