#pragma once
#ifndef __DLL__
#define __DLL__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct linked_list {
	int key;
	struct linked_list* prev, * next;
}list_t;

list_t* init();

list_t* delel(list_t*);

list_t* delroot(list_t*);

list_t* addel(list_t*);

list_t* findel(list_t*, int);

list_t* add_from_file(list_t*, char*);
#endif 
