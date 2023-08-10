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

	// V2
	printf("*** Start of Comparing Strings Demo ***\n");
	// Define two character array to hold the string input from the user
	char compare1[BUFFER_SIZE];
	char compare2[BUFFER_SIZE];
	// Declare variable to hold the string comparsion result
	int result;
	do {
		printf("Type the 1st string to compare (q - to quit): \n");
		// Read the string input from user and store it in the buffer
		fgets(compare1, BUFFER_SIZE, stdin);
		// Remove the newline character at the end of the string
		compare1[strlen(compare1) - 1] = '\0';
		// If the input isn't "q"
		if (strcmp(compare1, "q") != 0) {
			printf("Type the 2nd string to compare: \n");
			// Read the string input from user and store it in the buffer
			fgets(compare2, BUFFER_SIZE, stdin);
			// Remove the newline character at the end of the string
			compare2[strlen(compare2) - 1] = '\0';
			// Store the comparsion result of compare1 and compare2 into result
			result = strcmp(compare1, compare2);
			// Display the corresponding message according to the strcmp result
			if (result < 0)
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
			else if (result == 0)
				printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
			else
				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
		}

	} while (strcmp(compare1, "q") != 0); // if the user input 'q' on compare1, the loop will break out
	// Ending message
	printf("*** End of Comparing Strings Demo ***\n\n");
}