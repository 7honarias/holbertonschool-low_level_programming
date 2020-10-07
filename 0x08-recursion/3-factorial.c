# include "holberton.h"

/**
 * factorial - give factorial of a number
 * @n: number for work
¨* Return: factorial
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * (factorial(n - 1)));
}
