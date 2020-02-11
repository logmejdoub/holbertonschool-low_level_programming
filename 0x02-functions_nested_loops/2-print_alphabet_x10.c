#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char current2;
	int current1;

	for (current1 = 0; current1 <= 9; current1++)
	{
		for (current2 = 'a'; current2 <= 'z'; current2++)
			_putchar(current2);
		_putchar('\n');
	}
}
