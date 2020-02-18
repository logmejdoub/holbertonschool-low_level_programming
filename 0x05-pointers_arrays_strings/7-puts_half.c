#include "holberton.h"

/**
* puts_half -prints half of a string
* @str: char
*
*/
void puts_half(char *str)
{
	int a, b;

	for (a = 0; str[a] != '\0'; a++)
		;
	if (a % 2 == 0)
		b = a / 2;
	else
		b = a - ((a - 1) / 2);
	for (; b < a; b++)
		_putchar(str[b]);
	_putchar('\n');
}

