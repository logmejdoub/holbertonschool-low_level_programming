#include "holberton.h"

/**
* print_chessboard - fonction that prints the chessboard
* @a: pointer
*
*/

void print_chessboard(char (*a)[8])
{
	int current1, current2;

	for (current1 = 0; current1 < 8; current1++)
		for (current2 = 0; current2 < 8; current2++)
			_putchar(a[current1][current2]);
		_putchar('\n');
}
