#include "holberton.h"

/**
 * main - putchar Holberton
 *
 * Return: 0
 */
int main(void)
{
	char *holberton;
	int a;

	holberton = "Holberton";
	for (a = 0; a < 9; a++)
		_putchar(holberton[a]);
	_putchar('\n');
	return (0);
}

