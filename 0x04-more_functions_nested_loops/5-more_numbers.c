#include "holberton.h"

/**
 * more numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int numb;
	int times;

	for (times = 0; times < 10; times++)
	{
		for (numb = 0; numb <= 14; numb++)
		{
			if (numb > 9)
			{
				_putchar(numb / 10 + 48);
			}
			_putchar(numb % 10 + 48);
		}
		_putchar('\n');
	}
}
