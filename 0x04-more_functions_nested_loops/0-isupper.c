#include "holberton.h"

/**
 * _isdigit - Check if a character is a digit.
 * @c: integer to evaluate
 * Return: 1 if c is a uppcase, 0 otherwise.
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
