# include "function_pointers.h"
# include <stdlib.h>

/**
 * int_index - searches for an integer.
 * @array: array integer
 * @size: size of arrays
 * @cmp: function compare.
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);


}
