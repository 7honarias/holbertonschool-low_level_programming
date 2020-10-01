# include "holberton.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string one
 * @src: string two
 * @n: number the caracter to concatenate
 * Return: nothing.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int count;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[cont + i] = src[i];
	}
	dest[count + i] = '\0';

	return (dest);
}
