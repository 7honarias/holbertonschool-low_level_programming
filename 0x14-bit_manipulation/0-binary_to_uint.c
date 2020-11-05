#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to int
 * @b: string to convert
 * Return: int.
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int c = 0;
	unsigned int x = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		c <<= 1;
		if (b[i] == '1')
		{
			c ^= x;
		}
		i++;
	}

	return (c);
}
