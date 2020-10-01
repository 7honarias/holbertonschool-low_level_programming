# include "holberton.h"

/**
 * reverse_array - function that reverses the content
 * @a: array of int
 * @n: number.
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int *p = a;

	i = 0;
	n--;
	while (n != i)
	{
		temp = a[n];
		*(p + n) = a[i];
		*(p + i) = temp;
		i++;
		n--;
	}
}
