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
		printf("%d", a[cont]);
		if (cont < (n - 1))
		{
			printf(", ");
		}
	}
	printf('\n');
}
