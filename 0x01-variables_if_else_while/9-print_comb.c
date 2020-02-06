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
	{
		putchar(current + '0');
		if (current != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

