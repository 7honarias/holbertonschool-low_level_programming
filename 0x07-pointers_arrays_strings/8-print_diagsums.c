# include "holberton.h"
# include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: string of int
 * @size: size of string of row
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	i = 0;
	while (i <= (size * size - 1))
	{
	       	sum1 = sum1 + a[i];
		i = i + (size + 1);
	}
	printf("%d, ", sum1);
	j = 0;
	size--;
	while (j < (size * (size + 1)))
	{
		j = j + size;
		sum2 = sum2 + a[j];
	}
	printf("%d\n", sum2);

}
