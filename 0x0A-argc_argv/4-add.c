# include "holberton.h"
# include <stdlib.h>
# include <ctype.h>

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
	int j;
	char *punt;

	sum = 0;
	if (argc < 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			punt = argv[i];
			for (j = 0; punt[j]; j++)
			{
				if (isdigit(punt[j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
