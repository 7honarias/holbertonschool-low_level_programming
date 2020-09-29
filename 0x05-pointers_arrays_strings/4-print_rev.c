# include "holberton.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: is array of in
 * Return: Nothing
 */

void print_rev(char *s)
{

	int num = strlen(s);
	char *temp = s;

	for (s = (s + num); s >= temp; --s)
	{
		_putchar(*s);
	}
	_putchar('\n');


}
