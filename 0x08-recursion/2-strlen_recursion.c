# include "holberton.h"

/**
 * _strlen_recursion - function that return the length
 * @s: string
 * Return: len of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	++s;
	return (1 + _strlen_recursion(s));
}
