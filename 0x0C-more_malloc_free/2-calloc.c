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

	void *p = '\0';

	if (nmemb < 1 || size < 1)
	{
		return (p);
	}
	p = (char *)malloc(size * nmemb);

	if (p == NULL)
	{
		return (p);
	}
	return (p);

}
