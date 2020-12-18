//
// Created by Jon on 12/6/2020.
//

#ifndef INC_2020HW4STARTER_ROOM_H
#define INC_2020HW4STARTER_ROOM_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int roomNum;
    bool isOpen;
    double treasure;
} Room;


typedef struct {
    float treasure;
    float maxTreasure;
    int nRoomSearched;
    int maxRooms;
    Room *roomsSearched; //define as array of size maxRooms
} Search;

void printRoomName(Room room);

bool open(Room room);

int getTreasure(Room room);

#endif //INC_2020HW4STARTER_ROOM_H
