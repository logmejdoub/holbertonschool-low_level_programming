#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 *@c: int
 * Return: Always 0.
 */
int _isalpha(int c)
{
	int current1;

	for (current1 = 65; current1 <= 122; current1++)
	{
		if (current1 == 91)
			current1 = 97;
		if (c == current1)
			return (1);
	}
	return (0);
}
