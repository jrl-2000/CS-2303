/*
 * space.c
 *
 *  Created on: Jan 27, 2020
 *      Author: Jonathan Lopez
 */
#include <stdio.h>
#include "space.h"

bool initSpace(int* corner, int howManyRows)
{
	bool ok = true;
	for(int row = 0; row< howManyRows; row++)
	{
		for(int col = 0; col < howManyRows; col++)
		{
			*(corner+row*howManyRows + col) = 0;
		}
	}
	return ok;
}

void printBoard(int* corner, int howManyRows){
    for(int row = 0; row< howManyRows; row++)
    {
        for(int col = 0; col < howManyRows; col++) // <------- 0 is the right value
        {

            printf("%d", *(corner+row*howManyRows + col));
            if (col == howManyRows-1){
                printf("\n");
            }
        }
    }
}


