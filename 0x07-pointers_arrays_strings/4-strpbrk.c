# include "holberton.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * @s: string
 * @accept: search accept
 * Return: a pointer to th byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (&s[i]);
}
