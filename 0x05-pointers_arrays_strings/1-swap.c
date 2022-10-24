#include "main.h"

/**
* swap_int -> given two integers swap the values the are holding
* @a: first pointer
* @b: second pointer
*/
void swap_int(int *a, int *b)
{
	int constant;

	constant = *a;
	*a = *b;
	*b = constant;
}
