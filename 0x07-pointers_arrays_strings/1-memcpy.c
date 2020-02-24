#include "holberton.h"

/**
* _memcpy - function that copies memory area
* @dest: destination string
* @src: source of string
* @n: first byte
* Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int current;

	for (current = 0; current < n; current++)
		dest[current] = src[current];
	return (dest);
}
