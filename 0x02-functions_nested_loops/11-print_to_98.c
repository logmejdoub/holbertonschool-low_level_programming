#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - Print all natural numbers from n to 98 .
 * @n: int type
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%i, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%i, ", n);
			n--;
		}
	}
	printf("%i\n", n);
}
