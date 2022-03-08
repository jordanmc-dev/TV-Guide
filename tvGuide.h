/* declares an appropriate structure for representing a TV guide entry. */
#ifndef TVGUIDE_H_ /*Include guard*/
#define TVGUIDE_H_
#define MAXCHAR 1000

typedef struct {
  char title[100];
	char dayOfTheWeek[20];
	int hour[2];
	int minute[2];	
} TVGuide; /* tvGuide structure typedef */

typedef struct LinkedListNode {
  TVGuide* data;
  struct LinkedListNode* next;
} LinkedListNode;

void readUserDay(char* theDay);
void readUserSort(char* sortingBy);

#endif

