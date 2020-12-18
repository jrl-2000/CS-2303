//============================================================================
// Name        : 2020HW4starter.cpp
// Author      : Jonathan Lopez
// Version     :
// Copyright   : Your copyright notice
// Description : House Search HW 4 in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "tests.h"
#include "production.h"
#include <stdio.h>
#include <stdlib.h>
#include "JRLName.h"
#include "TMSName.h"


int main(int argc, char* argv[]) {
    puts("!!!Let's do  HW 4!!!"); /* prints !!!Hello World!!! */
    FILE *outputP = fopen("output.txt", "w");
    fclose(outputP);
    if(tests())
    {
        puts("Tests Passed!");
        production(argc, argv);
    }
    else
    {
        puts("Tests did not pass.");
    }
    return EXIT_SUCCESS;
}

