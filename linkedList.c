/*contains all necessary functions for creating, destroying, manipulating,
and accessing a linked list*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"

/* first step to create linkedList*/
void createList(LinkedList** list){
  *list = (LinkedList*)malloc(sizeof(LinkedList));
  (*list)->head = NULL;
  (*list)->tail = NULL;
}
/*check if list is empty*/
int isEmpty(LinkedList* list){
  int empty = 0;
  if (list->head == NULL){
    empty = 1;
  }
  return empty;
}

void addToEnd(LinkedList* list, TVGuide* tvguide){
  LinkedListNode* temp;
  temp = list->tail;
  LinkedListNode* newNode = (LinkedListNode*)calloc(1, sizeof(LinkedListNode));
  newNode->data = tvguide;
  newNode->next = NULL;
  if(isEmpty(list)){
    list->head = list->tail = newNode;
  } else{
    temp->next = newNode;
    list->tail = newNode;
  }
  list->count ++;
}

/*to retrieve element or specific.*/
TVGuide* retreiveElement(LinkedList* list, int index){
  LinkedListNode* current;
  current = list->head;
  int i = 0;
  while (i < (index-1) && current != NULL){
    current = current->next;
    i++;
  }
  return current->data;
}
void freeList(LinkedList* list){
  LinkedListNode *node, *nextNode;
  node = list->head;
  while(node != NULL){
    nextNode = node->next;
    free(node);
    list->count --;
    node = nextNode;
  }
  free(list);
}

/*TVGuide* removeFirstElement(LinkedList* list){
  LinkedListNode* temp;
  temp = list->head;
  TVGuide* eptr = temp->data;
  list->head = list->head->next;
  list->count --;
  return eptr;
}*/