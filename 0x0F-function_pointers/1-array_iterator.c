# include "function_pointers.h"
# include <stdlib.h>
# include <stdio.h>

/**
 * array_iterator - funtion that executes a function
 * given as a prameter on each element of an array
 * @array: array of element
 * @size: size of array
 * @action: pointer to the function you need to use
 * Return: Nothing
 */

void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if (action == NULL || array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
