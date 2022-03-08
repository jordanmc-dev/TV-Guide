#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "boolean.h"



typedef struct {
  LinkedListNode* head;
  LinkedListNode* tail;
  int count;
} LinkedList;

void createList(LinkedList** list);
void addToEnd(LinkedList* list, TVGuide* tvguide);
TVGuide* removeFirstElement(LinkedList* list);
void printEntry(TVGuide* tvguide);
void printList(LinkedList* list);
void freeList(LinkedList* list);
TVGuide* retreiveElement(LinkedList* list, int index);
int isEmpty(LinkedList* list);

#endif