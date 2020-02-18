#include "holberton.h"

/**
* swap_int - swaps the values of two integers
* @ab : int
*/

void swap_int(int *a, int *b)
{
int ab;

	ab = *a;
	*a = *b;
	*b = ab;
}
