# include "holberton.h"

/**
 * is_palindrome - funtion check if a string is palindrome
 * @s: is the string
 * Return: 1 if is palindrome otherwise 0
 */

int is_palindrome(char *s)
{
	return (validador(0, _strlen(s) - 1, s));
}

/**
 * _sterlen - count charter of string
 * @s: string to validator
 * Return: size of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * validador - validator if string is palindrome
 * @j: is variable
 * @str: is the len of string
 * @s: string
 * Return: 1 if is palindrome
 */

int validador(int j, int str, char *s)
{
	if (str > 0)
	{
		if (s[j] == s[str])
		{
			return (validador(j + 1, str - 1, s));
		}
		else if (s[j] != s[str])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}
