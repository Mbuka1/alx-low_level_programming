#include "holberton.h"
/**
 * main - Print "Holberton" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char k[] = "_putchar";
	int i = 0;

	while (k[i] != '\0')
	{
		_putchar(_putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
