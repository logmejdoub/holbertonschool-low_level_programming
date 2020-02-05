#include <stdio.h>
/**
* main - entry point
* Return: always 0 (success)
*/
int main(void) {
    printf("Size of char: %ld byte\n", sizeof(charType));
    printf("Size of int: %ld bytes\n", sizeof(intType));
    printf("Size of double: %ld bytes\n", sizeof(doubleType));
    printf("Size of float: %ld bytes\n", sizeof(floatType));
    return 0;
}
