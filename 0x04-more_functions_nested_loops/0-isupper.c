#include "holberton.h"

/**
 * _isupper - funtion checks for uppercase character.
 * @c: intro of character
 * Return: 1 if charter is uppercase
 *
 */

int _isupper(int c)
{
	if (c > 40 && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
