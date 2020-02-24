#include "holberton.h"

/**
* _memset - function that fills memory with a constant byte
* @s: memory space to be filled
* @b: byte
* @n: first byte to fill memory
* Return: pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int current;

	for (current = 0; current < n; current++)
		s[current] = b;

	return (s);
}
