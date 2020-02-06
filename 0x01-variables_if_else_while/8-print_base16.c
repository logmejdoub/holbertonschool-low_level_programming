#include <stdio.h>

/**
 * main - print alpha
 *
 * Return: 0
 */
int main(void)
{
	char current;

	for (current = 0; current <= 9; current++)
		putchar(current + '0');
	for (current = 'a'; current <= 'f'; current++)
		putchar(current);
	putchar('\n');
	return (0);
}

