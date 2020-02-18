#include "holberton.h"

/**
* _strlen - returns the length of a string
* @s: string (the length of the string)
* Return: the lenth of the string
*/

int _strlen(char *s)
{
	int ab;

	for (ab = 0; s[ab] != '\0'; ab++)
		;
	return (ab);
}

