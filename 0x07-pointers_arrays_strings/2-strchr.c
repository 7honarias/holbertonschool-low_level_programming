# include "holberton.h"

/**
 * _strchr - Funtion for found a char in a string
 * @s: string
 * @c: char for find
 * Return: a pointer to the first occurrence of th carter c
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ret;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ret = &s[i];
			break;
		}
		i++;
	}
	if (s[i] == '\0')
	{
		ret = &s[i];
	}
	return (ret);
}
