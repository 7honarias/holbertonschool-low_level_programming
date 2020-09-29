# include "holberton.h"

/**
 * rev_string - funtion that reverse a string
 * @s: string for work
 * Return: Nothing.
 */


void rev_string(char *s)
{
	int size;
	int i;
	int j;
	char temp;

	j = 0;

	for (size = 0; s[size] != '\0'; size++)
	{

	}

	for (i = size - 1; j < i; i--)
	{
		temp = s[j];
		*(s + j) = s[i];
		s[i] = temp;
		j++;
	}

}
