/*
Full Name : KRUTIN BHARATBHAI POLRA
Student ID# : 135416220
Email : kbpolra@myseneca.ca
Section : NGG
*/

// CONVERTING MODULE SOURCE

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

// VERSION 1

void converting(void)
{
    printf("*** Start of Converting Strings to int Demo ***\n");

    char intString[BUFFER_SIZE];  // define a character array to hold the string input from the user
    int intNumber;  // define an integer variable to hold the converted numeric value

    do 
    {
        printf("Type an int numeric string (q - to quit):");
        // read a string from standard input and store it in the buffer
        fgets(intString, BUFFER_SIZE, stdin);
        intString[strlen(intString) - 1] = '\0';  // remove the newline character at the end of the string
        // convert the string to an integer using the atoi() function
        if (strcmp(intString, "q") != 0)
        {
            intNumber = atoi(intString);
            printf("Converted number is %d\n", intNumber);
        }
    } while (strcmp(intString, "q") != 0);  // continue looping until the user inputs "q"

    printf("*** End of Converting Strings to int Demo ***\n\n");

    // Version 2

    // prints a message indicating the start of the program.
    printf("*** Start of Converting Strings to double Demo ***\n");

    // The following line defines the size of the buffer.
    char doubleString[BUFFER_SIZE];
    double doubleNumber;//variable

    //The following code will loop until the user types "q".
    do
    {
        // The following line prompts the user to type a double numeric string.
        printf("Type the double numeric string (q - to quit): ");

        // The following line reads a string from the user and stores it in doubleString.
        fgets(doubleString, BUFFER_SIZE, stdin);

        // The following line replaces the last character in doubleString with '\0'.
        doubleString[strlen(doubleString) - 1] = '\0';

        // The following lines check whether the user typed "q".
        // If not, the string is converted to a double value using the atof function and printed.
        if (strcmp(doubleString, "q") != 0) {
            doubleNumber = atof(doubleString);
            printf("Converted number is %f\n", doubleNumber);
        }
    } while (strcmp(doubleString, "q") != 0);// The following line checks whether the user typed "g".
    printf("*** End of Converting Strings to double Demo ***\n\n");

    // VERSION 3

    // This version of the program demonstrates the conversion of strings to long integers.
    // It prompts the user to enter a long numeric string and converts it to a long integer using the atol() function.
    // The converted value is then displayed on the screen.

    printf("*** Start of Converting Strings to long Demo ***\n");

    // Declare a character array to hold the input string from the user.
    char longString[BUFFER_SIZE];

    // Declare a variable to store the converted long integer value.
    long longNumber;

    // Start a loop that will continue until the user inputs "q".
    do {
        printf("Type a long numeric string (q - to quit):\n");

        // Read a string from the user and store it in the longString buffer.
        fgets(longString, BUFFER_SIZE, stdin);

        // Remove the newline character at the end of the string.
        longString[strlen(longString) - 1] = '\0';

        // Check if the user input is not "q".
        // If not, convert the string to a long integer using the atol() function,
        // and then print the converted value.
        if ((strcmp(longString, "q") != 0)) {
            longNumber = atol(longString);
            printf("Converted number is %ld\n", longNumber);
        }
    } while (strcmp(longString, "q") != 0);

    // Display a message indicating the end of the long integer conversion demo.
    printf("*** End of Converting Strings to long Demo ***\n\n");

}
