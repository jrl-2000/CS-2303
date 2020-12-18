 //
// Created by Jon on 12/6/2020.
//

#ifndef INC_2020HW4STARTER_LAYOUT_H
#define INC_2020HW4STARTER_LAYOUT_H

#include "Room.h"
 typedef struct {
     int layoutNum;
     int nRooms;
     Room *rooms; // the actual rooms themselves
     int **roomGraph; //2D array of whether it can be entered
 } Layout;


 Room* accessibleRooms(Layout layout, Room *rooms);

 int numAccessibleRooms(Layout layout);

 void printLayoutName(Layout layout);

 void printGraph(Layout layout);


#endif //INC_2020HW4STARTER_LAYOUT_H
