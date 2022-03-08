/*contains the comparison functions to be used by qsort()*/
#ifndef COMPARISON_H
#define COMPARISON_H

void comparison(TVGuide* tvguide[], char* theDay, char* sortingBy);
void qsort(TVGuide* tvguide[], char* theDay, char* sortingBy, void *base, size_t nmemb, size_t size);

#endif