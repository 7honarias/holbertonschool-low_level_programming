#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: number initial of the count
 * Description: Print all natural numbers from n to 98
 * Return: Nothing
 */
void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
		for (x = n; x > 98; x--)
		{
			printf("%i, ", x);
		}
	}
	else if (n < 98)
	{
		for (x = n; x < 98; x++)
		{
			printf("%i, ", x);
		}
	}
	printf("98\n");
}
