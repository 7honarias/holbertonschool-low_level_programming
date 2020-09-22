#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: noting
 */
void jack_bauer(void)
{
	int x;
	int y;
	int z;
	int a;

	for (x = '0'; x <= '2'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z <= '5'; z++)
			{
				for (a = '0'; a <= '9'; a++)
				{
					_putchar(x);
					_putchar(y);
					_putchar(':');
					_putchar(z);
					_putchar(a);
					_putchar('\n');
				}
			}
			if (x > '1' && y == '3')
				break;
		}
	}
}
