//============================================================================
// Name        : 2020HW6starter.cpp
// Author      : Jonathan Lopez
// Version     : 14
// Copyright   : Your copyright notice WPI
// Description : Battleship in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Tests.h"
#include "Production.h"
#include "JRLName.h"
#include "TMSName.h"

int main(int argc, char* argv[]) {
	cout << "!!!Hello World,  we are on HW6!!!" << endl; // prints !!!Hello World!!!
    FILE *outputP = fopen("output.txt", "w");
    fclose(outputP);
    if (tests()) {
        puts("Tests Passed!");
        production(argc, argv);
    } else {
        puts("Tests did not pass.");
    }
    return EXIT_SUCCESS;
}


