# include "holberton.h"
/**
 * _strstr - definition
 * @haystack: firt string
 * @needle: second string
 * Return: null if not found or pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i] == needle[j])
		{
			j++;
			i++;
		}

		if (j > 0)
		{
			i -= j;
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return (haystack[i]);
}
