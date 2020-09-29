# include "holberton.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: is array of in
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		++s;
	}

	while (i > 0)
	{
		_putchar(*(s - 1));
		--s;
		i--;
	}

	_putchar('\n');


}
