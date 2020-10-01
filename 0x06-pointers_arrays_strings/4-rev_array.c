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

	i = 0;
	n--;
	while (n != i)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		i++;
		n--;
	}
	
}
