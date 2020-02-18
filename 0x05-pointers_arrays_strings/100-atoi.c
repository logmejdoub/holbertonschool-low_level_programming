#include "holberton.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	unsigned int current, sign = 0;
	int sum = -1;

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
		if ((sum >= 0) && (s[current] < '0' || s[current] > '9'))
			break;
	}
	if (sum < 0)
		return (0);
	if ((sign % 2 != 0) && sum >= 0)
		sum *= -1;
	return (sum);
}
