#include "holberton.h"
#include <stdio.h>

/**
* rev_string - prints a string
* @s: string
*
*/
void rev_string(char *s)
{
	char temp[500];
	int length, current1, current2;

	for (length = 0; s[length] != '\0'; length++)
		;
	current1 = length - 1;
	for (current2 = 0; current2 < length; current1--, current2++)
		temp[current2] = s[current1];
	for (current1 = 0; s[current1] != '\0'; current1++)
		s[current1] = temp[current1];
}

