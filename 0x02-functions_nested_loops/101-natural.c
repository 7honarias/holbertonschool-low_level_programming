# include <stdio.h>

/**
 * main - function for find mult 3 and 5
 * Return: Always 0 success
 */

void main(void)
{
	int sum, x;

	x = 0;
	sum = 0;
	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum += x;
		}
		x++;
	}
	return (0);


}
