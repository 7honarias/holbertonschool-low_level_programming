#include "holberton.h"

/**
 * _isdigit - check for a digit 0 - 9
 * @c: is char for check
 * Return: 1 if c is a digit
 * Return: 0 otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
