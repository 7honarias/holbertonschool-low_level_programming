#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	x = 0;
	y = 0;
	z = 0;
	while (x <= 9)
	{
		y = x + 1;
		while (y <= 9)
		{
			z = y + 1;
			while (z <= 9)
			{
				putchar(x % 10 + '0');
				putchar(y % 10 + '0');
				putchar(z % 10 + '0');
				if (x != 7 || y != 8 || z != 9)
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
		}
		x++;
		y = 0;
	}
	putchar('\n');
	return (0);
}
