# include "holberton.h"

/**
 * _atoi - convert a string to an integer
 * @s: string recibe
 * Return: int
 */

int _atoi(char *s)
{
	int i;
	int num;
	int valor;
	int validador;

	i = 0;
	num = 0;
	valor = 1;
	validador = 0;
	while (*s != '\0')
	{
		if (validador == 1 && (*s < '0' || *s > '9'))
		{
			break;
		}
		if (*s == '-')
		{
			valor = valor * -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
			validador = 1;
		}
		++s;
		i++;
	}
	return (num * valor);
}
