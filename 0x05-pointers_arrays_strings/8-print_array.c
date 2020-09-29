# include <stdio.h>
# include "holberton.h"

/**
 * print_array - print array
 * @a: array
 * @n: number to print
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int cont;

	for (cont = 0; cont < n; cont++)
	{
		if (cont < (n - 1))
		{
			printf("%d, ", a[cont]);
		}
		else
		{
			printf("%d\n", a[cont]);
		}
	}
}
