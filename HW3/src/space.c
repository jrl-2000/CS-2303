/*
 * space.c
 *
 *  Created on: Jan 27, 2020
 *      Author: Jonathan Lopez
 */
#include <stdio.h>
#include "space.h"
#include <stdlib.h>
#include "LinkedList.h"
#include <time.h>



bool initSpace(spot* corner, int howManyRows)
{
	bool ok = true;
	for(int row = 0; row< howManyRows; row++)
	{
		for(int col = 0; col < howManyRows; col++)
		{
		    spot  spot1;
		    spot1.a = 65 + (rand() % 26);
		    spot1.b = 1 + rand() % 9;
			*(corner+row*howManyRows + col) = spot1;

		}
	}
	return ok;
}

bool initSpace2(spot* corner, int howManyRows)
{
    bool ok = true;
    for(int row = 0; row< howManyRows; row++)
    {
        for(int col = 0; col < howManyRows; col++)
        {
            spot  spot2;
            spot2.a = 65 + (rand() % 26); //<---- should be 65  instead of 100 for a number to letter conversion ASCII
            spot2.b = 1 + rand() % 9;
            *(corner+row*howManyRows + col) = spot2;

        }
    }
    return ok;
}
void printBoard(spot* corner, int howManyRows){

    for(int row = 0; row< howManyRows; row++)
    {
        for(int col = 0; col < howManyRows; col++)
        {
            printf("%c%d ", (*(corner+row*howManyRows + col)).a, (*(corner+row*howManyRows + col)).b);
            if (col == howManyRows-1){
                printf("\n");
            }
        }
    }
}




void searchFor(spot* corner, spot* smthing, int howManyRows, LLNode* aList)
{
    for(int row = 0; row< howManyRows; row++) {
        for (int col = 0; col < howManyRows; col++) {
            if ((*(corner+row*howManyRows + col)).a == smthing->a  && (*(corner+row*howManyRows + col)).b == smthing->b ){
                (*(corner+row*howManyRows + col)).a = '_'; //<----- Should be something else other than X b/c X is included in the spot struct
                (*(corner+row*howManyRows + col)).b = 0;
                savePayload(aList, smthing);
            }
        }
    }
}






