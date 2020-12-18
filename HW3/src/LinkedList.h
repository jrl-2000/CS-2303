/*
 * LinkedList.h
 *
 *  Created on: Nov 4, 2019
 *      Author: Jonathan Lopez
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "marker.h"

typedef struct
{
    char a;
    int b;
}spot;

spot* randCalls();


typedef spot Payload;

struct LLNode;
typedef struct
{
	struct LLNode* next;
	struct LLNode* prev;
	Payload* payP;
}LLNode;


typedef struct
{
	Payload* mp;
	LLNode* newQHead;
}backFromDQFIFO;

LLNode* makeEmptyLinkedList();
//LLNode2* makeEmptyLinkedList2();
LLNode* removeFromList(LLNode* hp, Payload* pP);
void savePayload(LLNode* lp, spot* spot);
//void savePayload2(LLNode2* lp, Payload2* mp);
bool isEmpty(LLNode* lp);
Payload* dequeueLIFO(LLNode* lp);
backFromDQFIFO* dequeueFIFO(LLNode* lp);
void printHistory(LLNode* hp);

#endif /* LINKEDLIST_H_ */
