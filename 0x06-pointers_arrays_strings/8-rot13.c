#include "holberton.h"

/**
* rot13 - encodes a string into 1337
* @c: String
* Return: 1337 String
*/
char *rot13(char *c)
{
	int c1, c2, n = 0;
	char *ch, *rep;

	ch = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rep = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (c1 = 0; c[c1] != '\0'; c1++)
	{
		for (c2 = 0; ch[c2] != '\0' && n == 0; c2++)
			if (c[c1] == ch[c2])
			{
				c[c1] = rep[c2];
				n = 1;
			}
		n = 0;
	}
	return (c);
}

