//Name - Sukhpreet Singh
// Student ID - 140337221
// Mail - ssingh1336@myseneca.ca
// Team - 7
// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80 
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"

void fundamentals(void) {
	// V1
	printf("*** Start of Indexing Strings Demo ***\n");
	//Declaring var and arrays
	char buffer1[BUFFER_SIZE];
	char numInput[NUM_INPUT_SIZE];
	size_t position;
	do {
		printf("Type not empty string (q - to quit): \n");
		fgets(buffer1, BUFFER_SIZE, stdin);
		buffer1[strlen(buffer1) - 1] = '\0';
		if (strcmp(buffer1, "q") != 0) {
			printf("Type the character position within the string:\n");
			//storing input
			fgets(numInput, NUM_INPUT_SIZE, stdin);
			numInput[strlen(numInput) - 1] = '\0';
			//calculating the postition
			position = atoi(numInput);
			//handling exceptions(for too big position)
			if (position >= strlen(buffer1)) {
				position = strlen(buffer1) - 1;
				printf("Too big... Position reduced to max. availbale\n");
			}
			//displaying the character
			printf("The character found at %d position is \'%c\'\n",
				(int)position, buffer1[position]);
		}
	} while (strcmp(buffer1, "q") != 0);
	//ending message
	printf("*** End of Indexing Strings Demo ***\n\n");
}
