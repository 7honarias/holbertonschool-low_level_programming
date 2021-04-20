#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Entry point
 * @array: array
 * @size: size of array
 * @value: value to search
 * Return: mach
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, end, ini = 0;

	if (array)
	{
		step = sqrt(size);
		end = ini + step;
		printf("Value checked array[%lu] = [%d]\n", ini, array[ini]);
		while (1)
		{
			if (value > array[end] && end != size)
			{
				printf("Value checked array[%lu] = [%d]\n", end, array[end]);
				if (end + step > size)
					end = size;
				else
					end = end + step;
				ini = ini + step;
			}
			else if (value <= array[end] || end == size)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", ini, ini + step);
				while (ini != end + 1)
				{
					printf("Value checked array[%lu] = [%d]\n", ini, array[ini]);
					if (array[ini] == value)
						return (ini);
					if (ini == size - 1)
						return (-1);
					ini++;
				}
			}
		}
	}
	return (-1);
}
