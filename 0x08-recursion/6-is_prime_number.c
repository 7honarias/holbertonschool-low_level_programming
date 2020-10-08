# include "holberton.h"

/**
 * is_prime_number - function validator of number prime
 * @n: integer
 * Return: 1 if is prime otherwise 0.
 */

int is_prime_number(int n)
{
	int i;
	int respuesta;

	if (n < 2)
	{
		return (0);
	}
	i = 2;
	respuesta = prim(n, i);
	return (respuesta);
}

/**
 * prim - validator if is prime
 * @n: number int
 * @i: validator
 * Return: answer
 */

int prim(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (prim(n, i + 1));
}
