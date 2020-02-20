#include "holberton.h"

/**
* cap_string - function that capitalizes all words of a string
* @c: string
* Return: String
*
*/
char *cap_string(char *c)
{
	int c1, c2;
	char *delim;
	char alpha;

	delim = " \t\n,;.!?\"(){}";
	for (c1 = 0; c[c1] != '\0'; c1++)
		for (c2 = 0; delim[c2] != '\0'; c2++)
			if (c[c1] == delim[c2])
				for (alpha = 'a'; alpha <= 'z'; alpha++)
					if (c[c1 + 1] == alpha)
						c[c1 + 1] -= 32;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if (c[0] == alpha)
			c[0] -= 32;
	return (c);
}
