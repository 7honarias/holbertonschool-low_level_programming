#include "holberton.h"
/**
 * times_table - print the 9 times table
 * Return: nothing.
 */
void times_table(void)
{
	int line;
	int tabla;
	int res;

	for (line = 0; line <= 9; line++)
	{
		for (tabla = 0; tabla <= 9; tabla++)
		{
			res = tabla * line;
			if (res > 9)
				_putchar((res / 10) + 48);
			else
				_putchar(' ');
			_putchar((res % 10) + 48);
			if (tabla < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
