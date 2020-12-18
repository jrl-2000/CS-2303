//
// Created by Jon on 12/7/2020.
//

#include "patrolboat.h"
PatrolBoat::PatrolBoat(int row, int col, int direction) : Ship(row, col, direction){
    length = 2;
}
int PatrolBoat::getLength(){
    return length;
}
char PatrolBoat::toChar(int row, int col){
    int num = row - this->row + col - this->col;
    return isHitList[num] ? 'p':'P';
}