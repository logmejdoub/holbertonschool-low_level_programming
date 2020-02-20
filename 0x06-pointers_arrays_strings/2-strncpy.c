#include "holberton.h"

/**
* _strncpy - function that copies a string
* @dest: string
* @src: string
* @n: nombre of bytes
* Return: 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	int current;

	for (current = 0; current < n && src[current] != '\0'; current++)
		dest[current] = src[current];
	for ( ; current < n; current++)
		dest[current] = '\0';
	return (dest);
}
