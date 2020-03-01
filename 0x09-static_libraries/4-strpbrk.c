#include "holberton.h"

/**
* _strpbrk - function that searches a string for any of a set of bytes
* @s:
* @accept:
* Return:
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int current1, current2;

		for (current1 = 0; s[current1] != '\0'; current1++)
			for (current2 = 0; accept[current2] != '\0'; current2++)
				if (s[current1] == accept[current2])
					return (&s[current1]);

		return (0);
}
