# include "holberton.h"
# include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int sum;
	int i;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) != 0)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}

		}
		printf("%d\n", sum);
	}
	return (0);
}
