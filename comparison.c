/* Contains the comparison functions to be used by qsort(). */
#include <stdio.h>
#include <stdlib.h>
#include "fileIO.h"
#include "boolean.h"

void comparison(TVGuide* tvguide[], char* theDay, char* sortingBy){
    
    /**/
    
    qsort(TVGuide* tvguide[], theDay,sortingBy, void *base, size_t nmemb, size_t size,);
    
}
/* qsort function to sort based on user choice */
void qsort(TVGuide* tvguide[], char* theDay, char* sortingBy, void *base, size_t nmemb, size_t size,){

    /* Write to file after sorting */
    writeToFile(TVGuide* tvguide);

}

