#include "holberton.h"

/**
* _strcat - function that concatenates two strings
* @dest: string
* @src: string
* Return: string
*/
char *_strcat(char *dest, char *src)
{
	int current, a;

	for (current = 0; dest[current] != '\0'; current++)
		;
	for (a = 0; src[a] != '\0'; a++)
		dest[current++] = src[a];
	dest[current] = '\0';
	return (dest);
}
