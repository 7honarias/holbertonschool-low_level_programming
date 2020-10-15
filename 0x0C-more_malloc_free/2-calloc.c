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

	void *p;

	if (nmemb < 1 || size < 1)
	{
		return (NULL);
	}
	p = (char *)malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}
	return (p);

}
