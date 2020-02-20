#include "holberton.h"

/**
* leet - encodes a string into 1337
* @c: String
* Return: 1337 String
*/
char *leet(char *c)
{
	int c1, c2;
	char *ch, *rep;

	ch = "aAeEoOtTlL";
	rep = "4433007711";
	for (c1 = 0; c[c1] != '\0'; c1++)
		for (c2 = 0; ch[c2] != '\0'; c2++)
			if(c[c1] == ch[c2])
				c[c1] = rep[c2];
	return (c);
}
