#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 *@i: int type number
 * Return: the last digit
 */
int print_last_digit(int i)
{
i = (i % 10);
	if (i < 0)
	i = (-1 * i);
	return (i);
}
