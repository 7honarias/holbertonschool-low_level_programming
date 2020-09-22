#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @a: parametro of main
 * Return: absolute value
 */

int _abs(int a)
{
if (a >= 0)
	return (a);
else
	return (a * -1);
}
