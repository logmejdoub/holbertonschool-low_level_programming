#include "holberton.h"

/**
 * print_numbers - prints numbers, from 0 to 9
 *
 * Return: allways 0
 */
void print_numbers(void)
{
	int B;

	for (B = '0'; B <= '9'; B++)
		_putchar(B);
	_putchar('\n');
}

