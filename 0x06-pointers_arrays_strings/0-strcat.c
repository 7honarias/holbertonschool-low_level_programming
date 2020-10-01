# include "holberton.h"
/**
 * _strcat - function that concatenate two strings
 * dest: string one
 * src: string two
 * Return: string.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int count;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[count + i] = src[i];
	}
	dest[count + i] = '\0';

	return (dest);
}
