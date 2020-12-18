/*
 * production.c
 *
 *  Created on: Jul 4, 2019
 *      Author: Jonathan Lopez
 */
#include "production.h"
#include "space.h"
#include "marker.h"
#include "LinkedList.h"

bool production(int argc, char* argv[]) {
    bool answer = false;
    printf("Marked spots will look like this '_0'");
    printf("\n");
    LLNode* callHistory = makeEmptyLinkedList();
    int boardSize = 20;
    int i= 0;
    spot* theSpaceP = (spot*)malloc(boardSize * boardSize * sizeof(spot));
    initSpace(theSpaceP, boardSize);
    printBoard(theSpaceP, boardSize);
    fflush(stdin);
    int numTurns = 50;
    //default number of terms
    if (argc == 2) {
        numTurns = atoi(argv[1]);
    } else {
        printf("Didn't find any arguments. \n"
               "Please enter the number of turns you would like: \t");
        fflush(stdout);
        scanf("%d", &numTurns);
        fflush(stdin);
    }
    printf("How many calls do you want there to be:");
    fflush(stdout);
    int c = getchar() - 48;
    printf("\n");
    printf("%d" ,c);
    printf("\n");
    while (i < c) {
        searchFor(theSpaceP, randCalls(), boardSize, callHistory);
        printf("\n");
        printBoard(theSpaceP, boardSize);
        i++;
    }
    printHistory(callHistory);
    return answer;
}










//	if(argc <=1) //no interesting information
//	{
//		puts("Didn't find any arguments.");
//		fflush(stdout);
//		answer = false;
//	}
//	else //there is interesting information
//	{
//		printf("Found %d arguments.\n", argc);
//		fflush(stdout);
//		char filename[FILENAMELENGTHALLOWANCE];
//		char* eptr=(char*) malloc(sizeof(char*));
//		long aL=-1L;
//		int maxRooms;
//		int maxTreasure;
//		for(int i = 1; i<argc; i++) //don't want to read argv[0]
//		{//argv[i] is a string
//			//in this program our arguments are a filename followed by the max of rooms, followed by max of treasure
//			switch(i)
//			{
//			case 1:
//				//this is filename
//				printf("The length of the filename is %d.\n",strlen(argv[i]));
//				printf("The proposed filename is %s.\n", argv[i]);
//				if(strlen(argv[i])>=FILENAMELENGTHALLOWANCE)
//				{
//					puts("Filename is too long.");
//					fflush(stdout);
//					answer = false;
//				}
//				else
//				{
//					strcpy(filename, argv[i]);
//					printf("Filename was %s.\n", filename);
//					fflush(stdout);
//				}
//				break;
//			case 2:
//				//this is maximum number of rooms
//
//				aL= strtol(argv[i], &eptr, 10);
//				maxRooms = (int) aL;
//				if(maxRooms <0)
//				{
//					answer = false;
//				}
//				printf("Number of rooms is %d\n",maxRooms);fflush(stdout);
//				break;
//			case 3:
//				//this is maximum amount of treasure
//
//				aL= strtol(argv[i], &eptr, 10);
//				maxTreasure = (int) aL;
//				if(maxTreasure <0)
//				{
//					answer = false;
//				}
//				printf("Amount of treasure is %d\n",maxTreasure);fflush(stdout);
//				break;
//
//			default:
//				puts("Unexpected argument count."); fflush(stdout);
//				answer = false;
//				break;
//			}//end of switch
//		}//end of for loop on argument count
//		puts("after reading arguments"); fflush(stdout);
//
//	}//end of command line arguments

	//obtain space for 20x20 of integers
//
//	int* theSpaceP = (int*) malloc(20*20*sizeof(int));
//    bool okInit = initSpace(theSpaceP, 20);
//
//
//	//we'll want to read the file
//	return answer;
//}
