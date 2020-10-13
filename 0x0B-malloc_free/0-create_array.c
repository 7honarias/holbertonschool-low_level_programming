# include "holberton.h"
# include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @c: array start char
 * @size: size array
 * Return: array pointer
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *p;

	p = malloc(sizeof(char) * size);

	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
