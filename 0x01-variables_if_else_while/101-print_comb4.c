#include <stdio.h>

/**
 * main - Entry point
 * print_alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	int current1, current2, timer;

	for (current1 = 48; current1 <= 57; current1++)
		for (current2 = 48; current2 <= 57; current2++)
		for (timer = 48; timer <= 57; timer++)
		if (current1 < current2)
		if (current2 < timer)
		{
			putchar(current1);
			putchar(current2);
			putchar(timer);
			if (current1 != 55 || current2 != 56 || timer != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}

