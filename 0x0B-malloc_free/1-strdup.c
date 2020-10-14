# include "holberton.h"

/**
 * _strdup - newly allocated space
 * @str: array
 * Return: a pointer
 *
 */

char *_strdup(char *str)
{
	int i = 0;
	int s;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}
	p = malloc(i + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (s = 0; s < i; s++)
	{
		p[s] = str[s];
	}
	p[s] = '\0';
	return (p);
}
