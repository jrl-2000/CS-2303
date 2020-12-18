//
// Created by Jon on 12/7/2020.
//

#include "battleship.h"

Battleship::Battleship(int row, int col, int direction) : Ship(row, col, direction){
    length = 4;
}

int Battleship::getLength(){
    return length;
}
char Battleship::toChar(int row, int col){
    int num = row - this->row + col - this->col;
    return isHitList[num] ? 'b':'B';
}