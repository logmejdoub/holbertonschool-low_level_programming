#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - program that multiplies two numbers.
* @argc: number of arguments passed to the function
* @argv: argument vector of pointers to strings
* Return: 0 Always
*/
int main(int argc, char *argv[])
{
        int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[a]);
	}		
        printf("%d\n", sum);
	return (0);
}

