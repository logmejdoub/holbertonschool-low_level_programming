#include <stdio.h>
/**
 * main - Entry point
 * print size of variables
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of char: %lu byte(s)\n", sizeof(char));
printf("Size of int: %lu byte(s)\n", sizeof(int));
printf("Size of double: %lu byte(s)\n", sizeof(long long));
printf("Size of float: %lu byte(s)\n", sizeof(float));
return (0);
}
