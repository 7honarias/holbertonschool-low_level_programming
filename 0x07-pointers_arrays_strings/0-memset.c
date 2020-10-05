# include "holberton.h"
/**
 * _memset - fills menory with a constant byte.
 * @s: array
 * @b: constante
 * @n: times of string
 * Return: a pointer to the momory to print
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		++i;
	}
}
