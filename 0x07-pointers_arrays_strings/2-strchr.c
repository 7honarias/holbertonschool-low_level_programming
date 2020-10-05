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

for (i = 0; s[i] + 1; i++)
{
if (s[i] == c)
{
ret = &s[i];
break;
}
else
{
ret = '\0';
}
}
return (ret);
}
