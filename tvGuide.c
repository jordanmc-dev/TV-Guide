/*contains the main() function.
    Start of the program.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tvGuide.h"
#include "userInterface.h"
#include "fileIO.h"

/* MAIN */
int main(int argc, char* argv[]){ 
    /*Read from command-Line param*/
    int counter;
    char* inFile = argv[1]; /* input */
    char* outFile = argv[2];/* output */

    printf("Program Name Is: %s", argv[0]);
    if(argc > 3){
        /* throw error message if more than input and output file on the param */
        printf("\nNo extra argument");
    }
    if(argc == 3){
        printf("\nNumber Of Arguments Passed: %d", argc - 1);
        printf("\n----Following Are The Command Line Arguments Passed----");
        /* Display the param the user entered, just to make sure */
        for(counter = 1; counter < argc; counter++){
            printf("\nargv[%d]: %s", counter, argv[counter]);
        	printf("\n");
        } 
    }  
    
    readUserDay(theDay);/* The day of the week */
    readUserSort(sortingBy);/* Sorting method  */
    readInput(inFile, theDay, sortingBy);/* Read input file */

    return 0;
}