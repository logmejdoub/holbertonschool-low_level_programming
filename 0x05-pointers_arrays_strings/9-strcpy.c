#include "holberton.h"

/**
* _strcpy - copies the string pointed to by src
* @dest: string
* @src: string
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int current;

	for (current = 0; src[current] != '\0'; current++)
		dest[current] = src[current];
	dest[current] = '\0';
	return (dest);
}

