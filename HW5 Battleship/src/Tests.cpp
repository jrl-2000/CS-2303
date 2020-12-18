/*
 * Tests.cpp
 *
 *  Created on: Feb 1, 2020
 *      Author: Jon
 */

#include "Tests.h"
#include <stdbool.h>
bool tests() {
    bool ans = true;
    ans &= printBoard();
    ans &= printBoard1();
    ans &= shotTest();
    ans &= randPlaceTest();
    return ans;
}
Board *test = new Board();

bool shotTest() {
    test->shot(-1, -6);
    test->printBoard(true);
    return true; //<--- should be true
}
bool randPlaceTest() {
    Board *random = new Board(false);
    random->printBoard(true);
    return true; //<--- should be true
}
bool printBoard() {
    test->printBoard(true);
    return true; //<--- should be true
}
bool printBoard1() {
    test->printBoard(false);
    return true;
}





