#include "holberton.h"

/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char current;

	for (current = 'a' ; current <= 'z' ; current++)
		_putchar(current);
		_putchar('\n');
}

