//
// Created by Jon on 12/7/2020.
//

#include "sub.h"
Submarine::Submarine(int row, int col, int direction) : Ship(row, col, direction){
    length = 3;
}

int Submarine::getLength(){
    return length;
}

char Submarine::toChar(int row, int col){
    int num = row - this->row + col - this->col;
    return isHitList[num] ? 's':'S';
}
