//
// Created by Jon on 12/7/2020.
//

#include "aircarrier.h"
AircraftCarrier::AircraftCarrier(int row, int col, int direction) : Ship(row, col, direction){
    length = 5;
}

int AircraftCarrier::getLength(){
    return length;
}

char AircraftCarrier::toChar(int row, int col){
    int num = row - this->row + col - this->col;
    return isHitList[num] ? 'a':'A';
}
