#include "holberton.h"
/**
 * print_most_numbers - print "01356789"
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
int B;

	for (B = '0'; B <= '9'; B++)
	{
		if (B == '2' || B == '4')
			B++;
		_putchar(B);
	}
	_putchar('\n');
}

