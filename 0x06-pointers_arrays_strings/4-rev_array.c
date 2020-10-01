# include "holberton.h"

/**
 * reverse_array - function that reverses the content
 * @a: array of int
 * @n: number.
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{
	int size, tmp;

	size = 0;
	n--;

	while (size < n)
	{
		tmp = a[size];
		a[size] = a[n];
		a[n] = tmp;
		size++;
		n--;
	}
}
