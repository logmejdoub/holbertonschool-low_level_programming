#include "holberton.h"

/**
 * _abs - the absolute value of an integer
 *@i: integer
 * Return: i.
 */
int _abs(int i)
{
	if (i < 0)
	i = (i * -1);
	return (i);
}

