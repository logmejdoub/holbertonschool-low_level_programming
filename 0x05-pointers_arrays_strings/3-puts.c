#include "holberton.h"

/**
* _puts - prints a string
* @str: string
*
*/
void _puts(char *str)
{
	int current;

	for (current = 0; str[current] != '\0'; current++)
		_putchar(str[current]);
	_putchar('\n');
}

