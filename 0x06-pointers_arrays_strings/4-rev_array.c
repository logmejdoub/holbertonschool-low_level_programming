#include "holberton.h"

/**
* reverse_array - function that reverses the content of an array of integers
* @a: array
* @n: number
*
*/
void reverse_array(int *a, int n)
{
	int current, ab;

	current = 0;
	while (current < n)
	{
		ab = a[current];
		a[current] = a[n - 1];
		a[n - 1] = ab;
		current++;
		n--;
	}
}
