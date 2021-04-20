#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - function to perform binary search.
 * @array: pointer to array to be searched.
 * @size: size of arrya to be searched.
 * @value: value to be searched for.
 * Return: index(i) of value if not found.
 */
int binary_search(int *array, size_t size, int value)
{
    int ini = 0;
    int i = 0;
    int fin = size - 1;
    int med = size/2;

    while (ini <= fin)
    {
        printf("Searching in array: ");
        for (i = ini; i <= fin; i++)
        {
            if (i == fin)
            {
                printf("%d\n", array[i]);
            }
            else
            {
                printf("%d, ", array[i]);
            }
        }
        med = (ini + fin) / 2;
        if (value < array[med])
        {
            fin = med - 1;
        }
        else if (value > array[med])
        {
            ini = med + 1;
        }
        else
        {
            return (med);
        }
    }
    return (-1);
}