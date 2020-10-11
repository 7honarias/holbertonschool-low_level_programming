# include "holberton.h"
# include <stdlib.h>

/**
 * calcular - calculate coins
 * @i: int
 * Return: int with res
 */

int calcular(int i)
{
	int j = i;
	int res;
	int k;

	k = 0;
	res = 0;

	if (j >= 25)
	{
		res = j / 25;
		j = j % 25;
		k = k + res;
	}

	if (j >= 10)
	{
		res = j / 10;
		j = j % 10;
		k = k + res;
	}
	if (j >= 5)
	{
		res = j / 5;
		j = j % 5;
		k = k + res;
	}
	k = k + j;

	return (k);
}
/**
 * main - print the minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if is success and 1 for error
 */

int main(int argc, char *argv[])
{
	int i = atoi(argv[1]);
	int rest;

	rest = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (i > 0)
	{
		rest = calcular(i);

	}
	printf("%d\n", rest);
	return (0);
}
