#include "holberton.h"

/**
 * print_square - prints a square, fallowed by a new line
 * @size: is the size of square
 * Return: Nothing
 *
 */

void print_square(int size)
{
	int line;
	int num;

	if (size <= 0)
		_putchar('\n');
	for (line = 0; line < size; line++)
	{
		for (num = 0; num < size; num++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
