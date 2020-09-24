#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * Return: Nothing
 *
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
