#include "holberton.h"
/**
 * print_times_table - prints the n times table
 * @n: number of table
 * return: print table
 */
void print_times_table(int n)
{
	if ((n < 15) || (n < 0))
	{
		int current1, current2, current3;

		for (current2 = 0; current2 <= n; current2++)
		{
			for (current1 = 0; current1 <= n; current1++)
			{
				current3 = (current1 * current2);
				if (current3 > 9 && current3 < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((current3 / 10) + '0');
					_putchar((current3 % 10) + '0');
				}
				else if (current3 <= 9 && current1 != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(current3 + '0');
				}
				else if (current3 > 99)
				{
					_putchar(' ');
					_putchar((current3 / 100) + '0');
					_putchar(((current3 / 10) % 10) + '0');
					_putchar((current3 % 10) + '0');
				}
				else
				{
					_putchar(current3 + '0');
				}
				if (current1 != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
