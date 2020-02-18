#include "holberton.h"

/**
* swap_int - swaps the values of two integers
* @a : int
* @b : int
*/
void swap_int(int *a, int *b)
{
int ab;

	ab = *a;
	*a = *b;
	*b = ab;
}
