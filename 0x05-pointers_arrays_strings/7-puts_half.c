# include "holberton.h"

/**
 * puts_half - print half of a string
 * @str: string for work
 * Return: Nothing.
 */

void puts_half(char *str)
{
	int x;
	int n;
	char *p = str;

	while (*str != '\0')
	{
		x++;
		++str;
	}
	if ((x % 2) != 0)
	{
		n = x - ((x - 1) / 2);
	}
	else
	{
		n = x / 2;
	}
	for (str = (p + n); *str != '\0'; ++str)
	{
		_putchar(*str);
	}

}
