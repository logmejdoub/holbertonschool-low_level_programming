#include <stdio.h>

/**
 * main - some shit
 *
 * Return: 0
 */
int main(void)
{
	int current1 = 0, current2;

	while (current1 <= 98)
	{
		current2 = current1 + 1;
		while (current2 <= 99)
		{
			putchar(current1 / 10 % 10 + '0');
			putchar(current1 % 10 + '0');
			putchar(' ');
			putchar(current2 / 10 % 10 + '0');
			putchar(current2 % 10 + '0');
			if (current1 == 98 && current2 == 99)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
			current2++;
		}
		current1++;
	}
	return (0);
}

