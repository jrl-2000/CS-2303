/*
 * Production.cpp
 *
 *  Created on: Feb 1, 2020
 *      Author: Jon
 */

#include "Production.h"
#include <stdbool.h>
#include <cstdio>

bool production(int argc, char* argv[]){
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
    Game *game = new Game();
    game->play(numTurns);
    return true;
}

