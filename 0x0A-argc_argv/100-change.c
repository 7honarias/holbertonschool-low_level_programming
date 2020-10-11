# include "holberton.h"
# include <stdlib.h>
/**
 * main - print the minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if is success and 1 for error
 */

int main(int argc, char *argv[])
{
	int j, k, res;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);
	res = 0;
	k = 0;

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
	if (j > 0)
		k = k + j;
	printf("%d\n", k);
	return (0);
}
