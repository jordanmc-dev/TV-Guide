/*contains all functions that get input from the user (via the terminal,
not the command-line) and output to the terminal*/

#include <stdio.h>
#include <string.h>
#include "userInterface.h"

/* Takes user input for day */
void readUserDay(char* theDay){
    char theDay[MAX_CHAR];
    printf("The day of the week: \n");
    fgets(theDay,MAX_CHAR,stdin);
    while(theDay != NULL ){
            /*fgets(theDay,10,stdin);*/
            lower_string(theDay);
            /* printf("The string in lower case: %s\n", theDay);  To see the result  */
            return (theDay);
    }
}
/* Takes user input for sorting method */
void readUserSort(char* sortingBy) {
    char sortingMethod[MAX_CHAR2];
    char new_sortingMethod[MAX_CHAR2];

    printf("Sorting method:  ");
    fgets(sortingMethod,MAX_CHAR2,stdin);
    lower_string(sortingMethod);/* pass to lower_string func to normalize */
    //new_sortingMethod = sortingMethod;
    while(sortingMethod != NULL){
        if((sortingMethod == 'time')){
            return sortingMethod;
        }else if((sortingMethod == 'name')){
            return sortingMethod;
        }else{
            /* if sorting method is not time or name */
            printf("The sorting method not found : %s", sortingMethod);
        }
    }
}
/* Normalizing string to lower case */
void lower_string(char s[]) {
    int c = 0;
    while (s[c] != '\0') {
        if (s[c] >= 'A' && s[c] <= 'Z') {
            s[c] = s[c] + 32;
        }
    c++;
    }
}