/*
 * marker.c
 *
 *  Created on: Jan 27, 2020
 *      Author: Jonathan Lopez
 */

#include "marker.h"
#include "LinkedList.h"
#include <stdlib.h>
#include"time.h"


//Marker* searchFor(int* map){
//
//}


Marker * placeMarker(int mkr, int* map)
{


    LLNode* markedHistory = makeEmptyLinkedList();

    srand(time(0));

    Marker* mP = NULL;

    for(int i = 0; i < mkr; i++)
    {

        mP = (Marker*)malloc(sizeof(Marker));
        mP->index = 1;
        mP->row = rand() % 20;
        mP->col = rand() % 20;
        *(map + (mP->row) * 20 + mP->col) += i+1; //change to i+1

        savePayload(markedHistory, mP);



    }


    return markedHistory;

}







