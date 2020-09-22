#include "holberton.h"
/**
 * print_alphabet_x10 prints 10 times the alphabet, in lowercase
 * return nothig
 */
void print_alphabet_x10(void)
{
	char x = 'a';
	int y = 0;

	while (y < 10)
	{
		x = 'a';
		while (x < 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
