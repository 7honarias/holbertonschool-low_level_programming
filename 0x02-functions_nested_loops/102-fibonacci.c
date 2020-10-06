# include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: Nothing
 */

int main(void)
{
	long count, x, y, sum;

	count = 0;
	x = 1;
	y = 0;
	while (count < 50)
	{
		sum = (x + y);
		printf("%ld", sum);
		y = x;
		x = sum;
		count++;
		if(count != 50)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
