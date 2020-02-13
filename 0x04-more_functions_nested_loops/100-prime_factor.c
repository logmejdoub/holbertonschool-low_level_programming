#include <stdio.h>
/**
* main - prints the largest prime factor of the number 612852475143
*
* Return: Always 0.
*/
int main(void)
{
	long ab, i;

	ab = 612852475143;
	for (i = 2; i <= ab; i++)
		if (ab % i == 0)
			while (ab % i == 0)
				ab = ab / i;
	printf("%ld\n", i - 1);
	return (0);
}
