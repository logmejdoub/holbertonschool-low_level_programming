#include <stdio.h>

/**
 * main - some shit
 *
 * Return: 0
 */
int main(void)
{
	int current1, current2;

	for (current1 = 48; current1 <= 57; current1++)
		for (current2 = 48; current2 <= 57; current2++)
		{
			if (current1 < current2)
			{
				putchar(current1);
				putchar(current2);
				if ((current1 != 56) || (current2 != 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}

