#include "holberton.h"

/**
 * jack_bauer - 24
 *
 *
 */
void jack_bauer(void)
{
int n, m, v, s;
for (n = 0; n <= 2; n++)
for (m = 0; m <= 9; m++)
for (v = 0; v <= 5; v++)
for (s = 0; s <= 9; s++)
{
_putchar(n + '0');
_putchar(m + '0');
_putchar(':');
_putchar(v + '0');
_putchar(s + '0');
_putchar('\n');
if ((n == 2) && (m == 3) && (v == 5) && (s == 9))
return;
}
}

