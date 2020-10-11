# include "holberton.h"
# include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	long i;
	long mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atol(argv[i]);
		}
		printf("%ld\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
