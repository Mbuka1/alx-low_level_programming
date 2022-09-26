#include "main.h"
/**
 * _memset -Fills memory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes in memory area to fill
 * Description :Fill the first 'n' bytes of the memory area pointed to by 's'
 * with the constant byte 'b'
 * Return: pounter to memory area 's'
 */

char *_memset(9char *s,char b, unsigned int n)
{
	int 1;
	i =0;
	while(n>0)
	{
		s[i]=b;
		i++;
		n--;
	}
	return (s);
}
