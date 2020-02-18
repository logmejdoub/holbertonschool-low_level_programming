#include "holberton.h"

/**
* print_rev - prints a string
* @s: string
*
*/
void print_rev(char *s)
{
	int ab;
	int i;

	for (ab = 0; s[ab] != '\0'; ab++)
		;
	for (i = ab - 1; i > 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

