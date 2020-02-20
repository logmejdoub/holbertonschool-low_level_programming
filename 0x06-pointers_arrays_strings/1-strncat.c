#include "holberton.h"

/**
* _strncat - function that concatenates two strings
* @dest: string
* @src: string
* @n: num of bytes
* Return: 0
*/
char *_strncat(char *dest, char *src, int n)
{
	int current, a;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (current = 0; n > 0 && src[current] != '\0'; current++)
	{
		n--;
		dest[a++] = src[current];
	}
	return (dest);
}
