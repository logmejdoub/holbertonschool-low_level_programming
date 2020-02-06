#include <stdio.h>
/**
 * main - prints numbers from 00 to 99
 *
 * Return: 0
 */
int main(void)
{
	int current1, current2;

	for (current1 = 0; current1 <= 9; current1++)
		for (current2 = 0; current2 <= 9; current2++)
		{
			putchar(current1 + '0');
			putchar(current2 + '0');
			if ((current1 != 9) || (current2 != 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}

