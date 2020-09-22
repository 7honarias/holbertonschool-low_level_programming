#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * Return: nothing.
 * @c: number for work
 */
int print_last_digit(int c)
{
	int a = c % 10;

	if (a < 0)
		a = a * -1;
	_putchar(a + '0');
	return (a);
}
