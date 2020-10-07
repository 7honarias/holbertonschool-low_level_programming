# include "holberton.h"
/**
 * _print_rev_recursion - function that prints a string
 * reverse
 * @s: string for reverse
 * Return: Nothing.
 */

void _print_rev_recursion(char *s)
{
	if (*(s + 1) == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(*s);

	if (*(s - 1) == '\n')
		_putchar('\n');
}
