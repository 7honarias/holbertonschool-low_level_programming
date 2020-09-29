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
	char *temp = s;

	while (*s != '\0')
	{
		i++;
		++s;
	}



	for (; s >= temp; --s)
	{
		_putchar(*(s - 1));
	}
	_putchar('\n');


}
