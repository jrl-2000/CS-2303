//
// Created by Jon on 12/7/2020.
//

#include "destroyer.h"
Destroyer::Destroyer(int row, int col, int direction) : Ship(row, col, direction){
    length = 3;
}

int Destroyer::getLength(){
    return length;
}

char Destroyer::toChar(int row, int col){
    int num = row - this->row + col - this->col;
    return isHitList[num] ? 'd':'D';
}
