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
        printf("Type an int numeric string (q - to quit):\n");
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

}