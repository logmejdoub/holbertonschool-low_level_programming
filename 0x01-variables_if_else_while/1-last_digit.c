#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the last digit of the number
 *
 * Return: 0
 */
int main(void)
{
	int n, Ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Ld = (n % 10);
	printf("Last digit of %i is %i ", n, Ld);
	if (Ld > 5)
		printf("and is greater than 5\n");
	else if (Ld == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}

