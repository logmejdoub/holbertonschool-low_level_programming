#include <stdio.h>

/**
 * main - print alpha
 *
 * Return: 0
 */
int main(void)
{
	int current;

	for (current = 0; current <= 9; current++)
		putchar(current + '0');
	putchar('\n');
	return (0);
}

