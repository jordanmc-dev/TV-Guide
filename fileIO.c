/* contains all functions that read from and write to files. */
#include <stdio.h>
#include "fileIO.h"
#include "linkedList.h"
#include "tvGuide.h"
#include "comparison.h"

/* read input file and store into linkedList */
void readInput(char* inFile, char* theDay, char* sortingBy){

    int i,j;
    FILE *fp; /* declare as a file */
    char* filename = inFile;
 
    fp = fopen(filename, "r");/* open file */
    if (fp == NULL){
        printf("Could not open file %s", filename); /*throw error message*/
        //return 0;
    }
    int numLines;
    numberOfLines(numLines,inFile);
    printf("Number of Lines: %d FileName: %s ", numLines, filename);

    /* linkedList start*/
    LinkedList* list;
    createList(&list);
    tvGuide *current, *head;
    
    TVGuide* tvGuide = (TVGuide*)malloc(sizeof(TVGuide));

    /* scan each line and store to linkedList */
    char line[100];
    while(fgets(line, sizeof(line), fp)! NULL){
        size_t len = strlen(line);
        LIST *node = malloc(sizeof(tvGuide));
        node->data = strdup(line);
        node->next =NULL;

        if(head == NULL){
            current = head = node;
        } else {
            current = current->next = node;
        }
    }
    fclose(fp); /* close file after opening! */
    /* after linkedList read the input and stored, now copy everything to array*/
    toArray(LinkedList* list, int numLines, char* theDay, char* sortingBy);
    
    /* test print */
    /* for(current = head; current ; current=current->next){
        printf("%s", current->data);
    } */
    /* need free for each node */
    return 0;
}
/* write to file */
void writeToFile(char* outFile, TVGuide* tvguide){
    
    FILE *fp = fopen("userfile.txt", "w");/* W write to file*/
    char* fp = outFile;

    if(fp == NULL){/*if file not empty*/
        perror("File is empty!"); /*throw message*/ 
    }else{
        /* Print to screen */
        for (int i = 0; i < ...; i++){
            printf(file, "%d:%d - %s\n", tvguide.hour[i], tvguide.minute[i], tvguide.title[i]);
        }
        /* write to output file */
        for (int i = 0; i < ...; i++){
            fprintf(file, "%d:%d - %s\n", tvguide.hour[i], tvguide.minute[i], tvguide.title[i]);
        }
    }
}
/* count Number of lines */
int numberOfLines(int numLines, char* inFile){

    /* count Number of lines in the file input */
    FILE *fp;
    char* filename = inFile;
 
    fp = fopen(filename, "r");/* open file */
    int count = 0;
    while (fgets(str, MAXCHAR, fp) != NULL){
        /* printf("%s", str); to check whats it reading */
        count++;
    }
    /* printf("Number of Lines %d ", count); */
    fclose(fp);/*Close file very important */
    return numLines;

}
/*Linked list to array*/
int toArray(LinkedList* list, int numLines, char* theDay, char* sortingBy){
    
    int i = 0;
    LinkedList current = root;
    char arrayList[numLines];
    /*Allocation of memory*/
    TVGuide* tvguide;
    tvguide = (TVGuide*)malloc(numLines * sizeof(tvguide));

    /* Retrieve element line by line and transfer it to array */
    while ((current->next) != NULL){
        retreiveElement(LinkedList* list, int numLines)
        arrayList[i] = current->data;
        current = current->next; 
        i++;   
    }
    /* linked list to array is done, now to filter out */
    comparison(arrayList[], theDay, sortingBy);

}