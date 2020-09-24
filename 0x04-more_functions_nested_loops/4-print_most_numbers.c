#include "holberton.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Return: Nothing.
 *
 */

void print_most_numbers(void)
{
	int numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
		if (numb != '2' && numb != '4')
		{
			_putchar(numb);
		}
	}
	_putchar('\n');
}
