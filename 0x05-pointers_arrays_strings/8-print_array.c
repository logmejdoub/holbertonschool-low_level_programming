#include "holberton.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* @a: array
* @n: int
*
*/
void print_array(int *a, int n)
{
	int current;

	for (current = 0; current < n; current++)
	{
		printf("%i", a[current]);
		if (current < n - 1)
			printf(", ");
	}
	printf("\n");
}
