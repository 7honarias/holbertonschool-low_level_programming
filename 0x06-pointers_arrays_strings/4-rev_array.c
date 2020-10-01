# include "holberton.h"

/**
 * reverse_array - function that reverses the content
 * @a: array of int
 * @n: number.
 * Return: Nothing.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	n--;
	while (n >= i)
	{
		printf("%d", a[n]);
		if (a[n] != a[i])
		{
			printf(", ");
		}
		n--;
	}
	printf("\n");
}
