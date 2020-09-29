# include "holberton.h"
/**
 * _strlen - function that print number
 * @s: char
 * Return: value
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		++s;
	}

	return (i);
}
