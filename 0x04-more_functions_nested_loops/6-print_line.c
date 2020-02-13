#include "holberton.h"

/**
* print_line - function that draws a straight line in the terminal
* @n : is the number of times the character
*
*/

void print_line(int n)
{
int s;
		for (s = 0; s < n; s++)
			_putchar('_');
		_putchar('\n');
}
