/*
 * tests.c
 *
 *  Created on: Jul 4, 2019
 *      Author: Jonathan Lopez
 */

#include "tests.h"
bool tests() {
    bool answer = false;
    bool ok2 = testPrintBingoBoard();
    bool ok3 = callsOnSpace();
    bool ok4 = testPrintHistory();
    if (ok2 && ok3 && ok4){
        return answer = true;
    }
}
bool testPrintBingoBoard(){
    int boardSize = 20;
    spot* theSpaceP = (spot*)malloc(boardSize * boardSize * sizeof(spot));
    initSpace2(theSpaceP, boardSize);
    printBoard(theSpaceP, boardSize);
    printf("\n");
    fflush(stdin);
    printf("Does the clear bingo look fine? Type 'y' for yes: ");
    fflush(stdout);
    char a = getchar();
    bool ans = false;
    if (a == 'y') {
        ans = true;
        puts("test clear bingo card has passed.");
    } else {
        puts("test clear bingo card did not pass.");
    }
    return ans;
}
bool callsOnSpace(){

    LLNode* callHistory = makeEmptyLinkedList();
    printf("Marked spots will look like this '_0'");
    printf("\n");
    int boardSize = 20;
    spot* theSpaceP = (spot*)malloc(boardSize * boardSize * sizeof(spot));
    initSpace(theSpaceP, boardSize);
    printBoard(theSpaceP, boardSize);
    fflush(stdin);
    printf("Enter 1 for this test");
    fflush(stdout);
    int c = getchar() - 48;
    printf("\n");
    printf("%d" ,c);
    printf("\n");
    searchFor(theSpaceP, randCalls(), boardSize, callHistory);
    printf("\n");
    printBoard(theSpaceP, boardSize);
    fflush(stdin);
    printf("Does the call on the bingo card show? Type 'y' for yes: ");
    fflush(stdout);
    char a = getchar();
    bool ans = false;
    if (a == 'y') {
        ans = true;
        puts("test calls on board passed.");
    } else {
        puts("test calls on board did not pass.");
    }
    return ans;
}
//bool loop(){
//    LLNode* callHistory = makeEmptyLinkedList();
//    printf("Marked spots will look like this '_0'");
//    printf("\n");
//    int boardSize = 20;
//    int i= 0;
//    spot* theSpaceP = (spot*)malloc(boardSize * boardSize * sizeof(spot));
//    initSpace2(theSpaceP, boardSize);
//    printBoard(theSpaceP, boardSize);
//    fflush(stdin);
//    printf("How many calls do you want there to be? (Enter a number more than 1 to test the loop):");
//    fflush(stdout);
//    int c = getchar() - 48;
//    printf("\n");
//    printf("%d" ,c);
//    printf("\n");
//    while (i < c) {
//        searchFor(theSpaceP, randCalls(), boardSize, callHistory);
//        printf("\n");
//        printBoard(theSpaceP, boardSize);
//        i++;
//    }
//    fflush(stdin);
//    printf("Does the looping look fine? Type 'y' for yes: ");
//    fflush(stdout);
//    char a = getchar();
//    bool ans = false;
//    if (a == 'y') {
//        ans = true;
//        puts("test looping passed.");
//    } else {
//        puts("test looping did not pass.");
//    }
//    return ans;
//}
bool testPrintHistory(){
    bool answer = false;
    LLNode* callHistory = makeEmptyLinkedList();
    printf("Marked spots will look like this '_0'");
    printf("\n");
    int boardSize = 20;
    int i= 0;
    spot* theSpaceP = (spot*)malloc(boardSize * boardSize * sizeof(spot));
    initSpace2(theSpaceP, boardSize);
    printBoard(theSpaceP, boardSize);
    fflush(stdin);
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
    fflush(stdin);
    printf("Does the print history look fine? Type 'y' for yes: ");
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











//bool testPrintBlankBoard() {
//    //this test is designed to test both the initSpace and print board functions.
//    int how = 20;
//    int* ROWS = (int*)malloc(how * how * sizeof(int));
//    printBoard(ROWS, how);
//    fflush(stdin);
//    printf("Does the blank space look fine? Type 'y' for yes: ");
//    fflush(stdout);
//    char a = getchar();
//    bool ans = false;
//    if (a == 'y') {
//        ans = true;
//        puts("test printBoard passed.");
//    } else {
//        puts("test printBoard did not pass.");
//    }
//    return ans;
//}
//
//bool markersOnSpace()
//{
//    //this test is designed to test the place marker function
//    LLNode* markedHistory = makeEmptyLinkedList();
//    int boardSize = 20;
//    int howManyMarkers= 9;
//    int* theSpaceP = (int*)malloc(boardSize * boardSize * sizeof(int));
//    initSpace(theSpaceP, boardSize);
//    placeMarker(howManyMarkers, theSpaceP);
//    printBoard(theSpaceP, boardSize);
//    fflush(stdin);
//    printf("Does the markers on the space look fine? Type 'y' for yes: ");
//    fflush(stdout);
//    char a = getchar();
//    bool ans = false;
//    if (a == 'y') {
//        ans = true;
//        puts("test markersOnSpace passed.");
//    } else {
//        puts("test markersOnSpace did not pass.");
//    }
//    return ans;
//
//}
//bool testPrintHistory()
//{
//    //tests the print history of the markers on the spacve as well as the save payload
//    LLNode* markedHistory = makeEmptyLinkedList();
//    int boardSize = 20;
//    int howManyMarkers= 9;
//    int* theSpaceP = (int*)malloc(boardSize * boardSize * sizeof(int));
//    initSpace(theSpaceP, boardSize);
//    placeMarker(howManyMarkers, theSpaceP);
//    printBoard(theSpaceP, boardSize);
//    printHistory(placeMarker(howManyMarkers, theSpaceP), howManyMarkers);
//    fflush(stdin);
//    printf("Does the print marker history on the space look fine? Type 'y' for yes: ");
//    fflush(stdout);
//    char a = getchar();
//    bool ans = false;
//    if (a == 'y') {
//        ans = true;
//        puts("test printHistory passed.");
//    } else {
//        puts("test printHistory did not pass.");
//    }
//    return ans;
//}





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
