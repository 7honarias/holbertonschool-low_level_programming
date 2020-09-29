# include "holberton.h"

/**
 * puts2 - print every other character of a string
 * @str: string of number
 * Return: Nothing.
 */

void puts2(char *str)
{
	int x;

	x = 0;
	while (*str != '\0')
	{
		if ((x % 2) == 0)
		{
			_putchar(*str);
		}
		++str;
		x++;
	}
	_putchar('\n');
}
