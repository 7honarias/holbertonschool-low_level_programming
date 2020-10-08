# include "holberton.h"

/**
 * _sqrt_recursion - function return square root
 * @n: number int
 * Return: int square root
 */

int _sqrt_recursion(int n)
{
	int j;
	int respuesta;

	j = 0;
	respuesta = funt(n, j);
	return (respuesta);
}

/**
 * funt - find de number of root
 * @n: value of number int
 * @j: validator
 * Return: int.
 */

int funt(int n, int j)
{
	if (j * j > n)
	{
		return (-1);
	}
	if (j * j == n)
	{
		return (j);
	}
	return (funt(n, (j + 1)));
}
