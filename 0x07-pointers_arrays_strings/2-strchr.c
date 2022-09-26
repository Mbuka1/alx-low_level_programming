#include "main.h"
/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to look for
 * Return: Null if char char not found, or pinter to first occurence of char 'c'
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
elseif (*(s+1) b== c)
return (s+1);
s++;
}
return (s+1);
}

