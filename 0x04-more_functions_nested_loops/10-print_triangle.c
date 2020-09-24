#include "holberton.h"

/**
 * print_triangle - print a triangle
 * @size: is the size of the triangle
 * Return: Nothing
 *
 */
void print_triangle(int size)
{
	int lin;
	int col;

	for ( lin = size; lin >= 1; lin--)
	{
		for (col = 1; col <= size; col++)
		{
			if (col < lin)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
