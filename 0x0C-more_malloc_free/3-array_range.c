# include "holberton.h"
# include <stdlib.h>
# include <stdio.h>

/**
 * array_range - creates an array of int
 * @min: minimo
 * @max: maximo
 * return: pointer int
 */

int *array_range(int min, int max)
{
	int i;
	int *p;


	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		p[i] = i + min;

	return (p);
}
