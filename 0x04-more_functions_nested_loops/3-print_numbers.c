#include "holberton.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: Nothing.
 */

void print_numbers(void)
{
	int numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
		_putchar(numb);
	}
	_putchar('\n');
}
