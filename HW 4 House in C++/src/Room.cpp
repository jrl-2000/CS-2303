//
// Created by Jon on 12/6/2020.
//

#include <stdio.h>

#include "Room.h"

void printRoomName(Room room){
    printf("Room %d",room.roomNum);
}

bool open(Room room){
    return room.isOpen;
}

int getTreasure(Room room){
    return (room.isOpen) ? room.treasure:0;
}
