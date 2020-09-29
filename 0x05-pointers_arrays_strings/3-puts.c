# include "holberton.h"

/**
 * _puts - function show
 * @s: char
 * Return: Nothing.
 */


void _puts(char *s)
{

	while (*s != '\0')
	{
		_putchar(*s);
		++s;
	}
	_putchar('\n');

}
