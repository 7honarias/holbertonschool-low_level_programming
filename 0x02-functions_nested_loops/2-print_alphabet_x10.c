#include "holberton.h"
/**
 * print_alphabet_x10 - Print the alphabet 10 times.
 * Return: Nothing.
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
