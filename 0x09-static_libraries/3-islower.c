#include "holberton.h"

/**
 * _islower - check the code for Holberton School students.
 * @c: int
 * Return: Always 0.
 */
int _islower(int c)
{
	int current1;

	for (current1 = 97; current1 <= 122; current1++)
		if (c == current1)
			return (1);
	return (0);
}
