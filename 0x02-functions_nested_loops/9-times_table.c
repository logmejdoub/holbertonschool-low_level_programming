#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
int m, a, c;
for (a = 0; a <= 9; a++)
{
	for (m = 0; m <= 9; m++)
	{
c = (m * a);
	if (c > 9)
	{
		_putchar(' ');
		_putchar((c / 10) + '0');
		_putchar((c % 10) + '0');
	}
	else if (m != 0)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(c + '0');
	}
	else
	{
		_putchar(c + '0');
	}
	if (m != 9)
		_putchar(',');
	}
		_putchar('\n');
}
}

