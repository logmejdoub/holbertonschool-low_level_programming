#include <stdio.h>
/**
 * main - Entry point
 * print size of variables
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of char: %ld byte\n", sizeof(charType));
printf("Size of int: %ld bytes\n", sizeof(intType));
printf("Size of double: %ld bytes\n", sizeof(doubleType));
printf("Size of float: %ld bytes\n", sizeof(floatType));
return (0);
}
