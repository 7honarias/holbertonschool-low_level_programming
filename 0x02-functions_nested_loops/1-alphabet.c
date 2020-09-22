#include "holberton.h"

/**
 * print_alphabet - Print the alphabet.
 * Return: Nothing
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
