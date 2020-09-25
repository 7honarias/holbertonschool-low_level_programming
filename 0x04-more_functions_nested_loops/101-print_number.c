#include "holberton.h"
/**
 * print_number - print a number
 * @n: number to print
 * Return: Nothing.
 */
void print_number(int n)
{
	if (n < 0)
		_putchar('-');
	if (n > 999 || n < -999)
	{
		_putchar((n / 1000) % 10 + 48);
	}
	if (n > 99 || n < -99)
	{
		_putchar((n / 100) % 10 + 48);

	}
	if (n > 9 || n < -9)
	{
		_putchar((n / 10) % 10 + 48);

	}
	_putchar(n % 10 + 48);
}
