//----------------------------------------------------------
// Name: NGA TSZ SZE
// StudentID: 136132222
// Email: ntsze@myseneca.ca
// Section: NGG
//----------------------------------------------------------

// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

// V1
void manipulating(void) {
	printf("*** Start of Concatenating Strings Demo ***\n");

	// Define two character array to hold the string input from the user
	char string1[BUFFER_SIZE * 2]; // holds more buffer size for concatenation of two strings
	char string2[BUFFER_SIZE];
	do {
		printf("Type the 1st string (q - to quit) :\n");
		// Read the string input from user and store it in the buffer
		fgets(string1, BUFFER_SIZE, stdin);
		// Remove the newline character at the end of the string
		string1[strlen(string1) - 1] = '\0';

		// Prompt the user to input the second string when user didn't input 'q' in the first string
		if ((strcmp(string1, "q") != 0)) {
			printf("Type the 2nd string:\n");
			// Read the second string input from user and store it in the buffer
			fgets(string2, BUFFER_SIZE, stdin);
			// Remove the newline character at the end of the string
			string2[strlen(string2) - 1] = '\0';
			// Concatenate the second string to the first string
			strcat(string1, string2);
			// Print the entire string 
			printf("Concatenated string is \'%s\'\n", string1);
		}
	} while (strcmp(string1, "q") != 0); // if the user input 'q' on string1, the loop will break out
	// Ending message
	printf("*** End of Concatenating Strings Demo ***\n\n");
}