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
	int i = atoi(argv[1]), res = 0;
	int k = 0, j = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (i > 0)
	{
		if (i >= 25)
		{
			res = i / 25;
			i = i % 25;
			k = k + res;
		}

		if (i >= 10)
		{
			res = i / 10;
			i = i % 10;
			k = k + res;
		}
		if (j >= 5)
		{
			res = i / 5;
			i = i % 5;
			k = k + res;
		}
		k = k + i;
	}
	printf("%d\n", k);
	return (0);
}
