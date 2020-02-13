#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *
 */
void more_numbers(void)
{
	int B, a, c;

	for (a = 0; a <= 9; a++)
	{
		for (B = '0'; B <= '9'; B++)
			_putchar(B);
		for (c = '0'; c <= '4'; c++)
		{
			_putchar('1');
			_putchar(c);
		}
		_putchar('\n');
	}
}

