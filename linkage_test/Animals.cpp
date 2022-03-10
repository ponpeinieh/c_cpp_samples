#include <stdio.h>

static int animals = 8;
extern int i = 5;

void call_me(void){
	printf("%d %d ", i, animals);
}
