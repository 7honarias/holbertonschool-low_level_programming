#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Entry point
 * @array: array
 * @size: size of array
 * @value: value to search
 * Return: mach
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
