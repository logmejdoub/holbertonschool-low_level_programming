#include <stdio.h>

/**
* main - program that prints all arguments it receives
* @argc: number of arguments passed to the function
* @argv: argument vector of pointers to strings
* Return: 0 Always
*
*/
int main(int argc, char *argv[])
{
	int current;

	for (current = 0; current < argc; current++)
		printf("%s\n", argv[current]);
	return (0);
}
