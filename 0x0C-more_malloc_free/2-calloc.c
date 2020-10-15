# include "holberton.h"
# include <stdlib.h>
# include <stdio.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number
 * @size: size
 * Return: Pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *p = '\0';
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		*(p + i) = 0;
	}
	return (p);

}
