//
// Created by Jon on 12/7/2020.
//

#ifndef HW6_AIRCARRIER_H
#define HW6_AIRCARRIER_H

#include "Ship.h"

class AircraftCarrier: public Ship {

public:
    AircraftCarrier(int row, int col, int direction);
    int getLength();
    char toChar(int row, int col);
};


#endif //HW6_AIRCARRIER_H
