#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *
 */
void more_numbers(void)
{
	int B, a;

	for (a = 0; a <= 9; a++)
	{
		for (B = 0; B <= 14; B++)
		{
			if (B / 10 != 0)
				_putchar((B / 10) + '0');
			_putchar((B % 10) + '0');
		}
		_putchar('\n');
	}
}

