#include "holberton.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	int current, sum = 0, sign = 0;

	for (current = 0; s[current] != '\0'; current++)
	{
		if (s[current] >= '0' && s[current] <= '9')
			break;
		if (s[current] == '-')
			sign += 1;
	}
	for (current = 0; s[current] != '\0'; current++)
	{
		if (s[current] >= '0' && s[current] <= '9')
			sum = (sum * 10) + (s[current] - '0');
	}
	if (sign % 2 != 0)
		sum *= -1;
	return (sum);
}
