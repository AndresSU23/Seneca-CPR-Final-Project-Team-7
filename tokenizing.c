/*
Name: David Andres Sanchez Umbarila
Student Id: 140273228
Section: NGG
Email: dasanchez-umbarila@myseneca.ca
*/

// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER__SIZE 300
#include "tokenizing.h"
// V1
/**
 * This function takes numerous words or phrases from the 
 * user separated by spaces or commas and stops taking 
 * input when it encounters a q character after that it 
 * prints the individual words or phrase and iterates 
 * again till it finds the q character on its own
 * @param None
 * @return Nones
*/
void tokenizing(void)
{
    printf("*** Start of Tokenizing Words Demo ***\n");
    //The initialization of variables
    char words[BUFFER__SIZE];
    char *nextWord = NULL;
    int wordsCounter;
    do
    {
// V1
        printf("Type a few words separated by space (q - to quit):\n"); 
        //Gets the input of the user and stores it in words
        fgets(words, BUFFER__SIZE, stdin);
        //Deletes the \n from the string
        words[strlen(words)-1] = '\0';
        //Checks if the word is q
        if (strcmp(words, "q")!=0){
            //Divides the word by spaces
            nextWord = strtok(words, " ");
            //Starts the wordCounter
            wordsCounter = 1;
            //Checks if there is a next word
            while (nextWord)
            {
                //Prints the next word with its corresponding word counter
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " ");
            }
        }
    } while (strcmp(words, "q") != 0);
    printf("*** End of Tokenizing Words Demo ***\n\n");

// V2
    printf("*** Start of Tokenizing Phrases Demo ***\n\n");
    // The initialization of variables
    char phrases[BUFFER__SIZE];
    char* nextPhrase = NULL;
    int phrasesCounter;
    do
    {
        printf("Type a few phrases separated by comma(q - to quit):\n");
        //Gets the user standard input separated by ,
        fgets(phrases, BUFFER__SIZE, stdin);
        //Replaces the last character with a null terminator
        phrases[strlen(phrases) - 1] = '\0';
        //Continues while phrases isn't exclusively q
        if ((strcmp(phrases, "q") != 0))
        {
            //Divides the string by comas
            nextPhrase = strtok(phrases, ",");
            //Initialize the phrase counter
            phrasesCounter = 1;
            //Iterate while there exists a next word
            while (nextPhrase)
            {
                //Display the next phrase and its counter
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
                //Keeps tokenizing the fist passed string
                nextPhrase = strtok(NULL, ",");
            }
        }
    //Exit Condition for the loop
    } while (strcmp(phrases, "q") != 0);
    printf("*** End of Tokenizing Phrases Demo ***\n\n");
}
    