# include "holberton.h"

/**
 * string_toupper - changes all lowercase letters
 * @s: is array for review
 * Return: char.
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
		{

			*s = *s - 32;
		}
		i++;
		s++;
	}
	return (s);
}
