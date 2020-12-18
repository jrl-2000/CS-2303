/*
 * tests.c
 *
 *  Created on: Jul 4, 2019
 *      Author: Jonathan Lopez
 */

#include "tests.h"
#include "production.h"
#include "space.h"


bool tests() {
    bool answer = false;
    bool ok2 = testPrintBlankBoard();
    bool ok3 = markersOnSpace();
    bool ok4 = testPrintHistory();
//  bool ok5 = testSearchFor(); for HW3
    if (ok2 && ok3 && ok4){
        return answer = true;
    }

}

bool testPrintBlankBoard() {
    //this test is designed to test both the initSpace and print board functions.
    LLNode* markedHistory = makeEmptyLinkedList();
    int how = 20;
    int* ROWS = (int*)malloc(how * how * sizeof(int));
    initSpace(ROWS, how);
    printBoard(ROWS, how);
    fflush(stdin);
    printf("Does the blank space look fine? Type 'y' for yes: ");
    fflush(stdout);
    char a = getchar();
    bool ans = false;
    if (a == 'y') {
        ans = true;
        puts("test printBoard passed.");
    } else {
        puts("test printBoard did not pass.");
    }
    return ans;
}

bool markersOnSpace()
{
    //this test is designed to test the place marker function
    LLNode* markedHistory = makeEmptyLinkedList();
    int boardSize = 20;
    int howManyMarkers= 9;
    int* theSpaceP = (int*)malloc(boardSize * boardSize * sizeof(int));
    initSpace(theSpaceP, boardSize);
    placeMarker(howManyMarkers, theSpaceP);
    printBoard(theSpaceP, boardSize);
    fflush(stdin);
    printf("Does the markers on the space look fine? Type 'y' for yes: ");
    fflush(stdout);
    char a = getchar();
    bool ans = false;
    if (a == 'y') {
        ans = true;
        puts("test markersOnSpace passed.");
    } else {
        puts("test markersOnSpace did not pass.");
    }
    return ans;

}
bool testPrintHistory()
{
    //tests the print history of the markers on the space as well as the save payload
    LLNode* markedHistory = makeEmptyLinkedList();
    int boardSize = 20;
    int howManyMarkers= 9;
    int* theSpaceP = (int*)malloc(boardSize * boardSize * sizeof(int));
    initSpace(theSpaceP, boardSize);
    placeMarker(howManyMarkers, theSpaceP);
    printBoard(theSpaceP, boardSize);
    printHistory(placeMarker(howManyMarkers, theSpaceP), howManyMarkers);
    fflush(stdin);
    printf("Does the print marker history on the space look fine? Type 'y' for yes: ");
    fflush(stdout);
    char a = getchar();
    bool ans = false;
    if (a == 'y') {
        ans = true;
        puts("test printHistory passed.");
    } else {
        puts("test printHistory did not pass.");
    }
    return ans;
}





//	bool answer = false;
//	bool ok1 =  testReadFile();
//	bool ok2 = testGotAdjacencyMatrix();
//	bool ok3 = testSomethingElse();
//	bool ok4 = testRemoveFromList();
//	answer = ok1 && ok2 && ok3 && ok4;
//	return answer;
//}
//
//bool testReadFile()
//{
//	bool ok = false;
//	puts("starting testReadFile");fflush(stdout);
//	//what are the criteria for success for
//	//test case 1:
//	//test case 2:
//
//    if(ok)
//    {
//    	puts("test read file passed.");
//    }
//    else
//    {
//    	puts("test read file did not pass.");
//    }
//	return ok;
//}
//
//bool testGotAdjacencyMatrix()
//{
//	bool ans = true;
//	//what are the criteria for success for
//	//test case 1:
//	//test case 2:
//
//	return ans;
//}
//
//bool testSomethingElse()
//{
//	bool ans = true;
//	//what are the criteria for success for
//	//test case 1:
//	//test case 2:
//
//	return ans;
//}
//bool testRemoveFromList()
//{
//	bool ok = true;
//	//what are the criteria for success for
//	//test case 1:
//	//test case 2:
//
//	return ok;
//}
