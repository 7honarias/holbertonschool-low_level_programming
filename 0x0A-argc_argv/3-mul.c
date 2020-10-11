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
	int i;
	int mul = 1;

	if (argc >= 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
