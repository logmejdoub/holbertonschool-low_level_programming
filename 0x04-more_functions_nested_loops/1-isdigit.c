#include "holberton.h"
/**
* _isdigit - checks digit if is £ [0..9]
* @c: int
* Return : 1 if c is a digit,0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}

