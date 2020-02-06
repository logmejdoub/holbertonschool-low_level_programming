#include <stdio.h>

/**
 * main - print alpha
 *
 * Return: 0
 */
int main(void)
{
	char current;

	for (current = 'z'; current <= 'a'; current--)
		putchar(current);
	putchar('\n');
	return (0);
}

