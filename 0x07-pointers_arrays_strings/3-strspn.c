# include "holberton.h"

/**
 * _strspn - funtion that gets the length of a prefix substring
 * @s: string
 * @accept: pointer
 * Return: int of bytes in the initial segment.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	i = 0;
	count = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		i++;
		if (count != i)
		{
			break;
		}
	}
	return (count);

}
