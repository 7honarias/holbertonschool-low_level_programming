#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number for valid
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int numb;
	int line;

	if (n > 0)
	{
		for (numb = 0; numb < n; numb++)
		{
			if (numb > 0)
			{
				for (line = 1; line < numb; line++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
