# include "holberton.h"

/**
 * _pow_recursion - function that returns the power of number
 * @x: number base
 * @y: number power
 * Return: int power.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
