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
    int step, end, ini = 0;

    if (array)
    {
        step = sqrt(size);
        end = ini + step;
        while (1)
        {
            if (value > arr[end])
            {
                printf("Value checked array[{}] = [{}]\n", ini, array[ini]);
                printf("Value checked array[{}] = [{}]\n", end, array[end]);
                if (end + step > size)
                    end = size;
                else
                    end = end + step;
                ini = ini + step;
            }
            else if (value <= array[end] || end == size)
            {
                while (step > 0)
                {
                    if (array
                    
                    
                    
                    
                    
                    )
                }
            }
        }
    }        
    return (-1);
}