# include "holberton.h"
# include <stdlib.h>
# include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number to concatenate
 * Return: pointer shall point
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, count = 0;
	unsigned int j = 0;
	char *p = '\0';

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		count++;
		i++;
	}
	p = malloc(sizeof(char) * (count + 1 + n));

	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] && j < n)
	{
		p[i] = s2[j];
		j++;
		i++;
	}

	p[i] = '\0';
	return (p);
}
