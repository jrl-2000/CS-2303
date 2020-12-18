/*
 * space.h
 *
 *  Created on: Jan 27, 2020
 *      Author: Jonathan Lopez
 */

#ifndef SPACE_H_
#define SPACE_H_

#include <stdbool.h>
#include "LinkedList.h"



void printBoard(spot*, int);
bool initSpace(spot*, int);
bool initSpace2(spot*, int);
void searchFor(spot*, spot*, int, LLNode*);







#endif /* SPACE_H_ */
