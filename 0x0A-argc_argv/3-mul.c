#include <stdio.h>
#include <stdlib.h>

/**
* main - program that multiplies two numbers.
* @argc: number of arguments passed to the function
* @argv: argument vector of pointers to strings
* Return: 0 Always
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
