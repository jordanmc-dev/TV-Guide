#ifndef FILEIO_H
#define FILEIO_H

#define MAXCHAR 1000 /*mac char by 1000*/
char str[MAXCHAR];

void readInput(char* inFile);
void writeToFile(char* outFile);
int numberOfLines(int numLines, char* inFile);


#endif