/*
 ============================================================================
 Name        : 2020HW3starter.c
 Author      : Jonathan Lopez
 Version     :
 Copyright   : Your copyright notice
 Description : House Search in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "tests.h"
#include "production.h"
#include "TMSName.h"
#include "JRL.h"

int main(int argc, char* argv[]) {
	puts("!!!Let's do  HW3!!!"); /* prints !!!Hello World!!! */
	if(tests())
	{
		puts("About to run production.");
		production(argc, argv);
	}
	else
	{
		 puts("Tests did not pass.");
	}
	return EXIT_SUCCESS;
}
