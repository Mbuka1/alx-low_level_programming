#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 * Returns 1 if c is uppercase
 * Return: Always 0 otherwise.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
