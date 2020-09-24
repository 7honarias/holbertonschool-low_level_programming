#include "holberton.h"

/**
 *
 *
 *
 *
 */
void print_times_table(int n)
{
	int x, y, m;

        for (x = 0; x <= n; x++)
        {
                for (y = 0; y <= n; y++)
                {
                        m = x * y;
                        if (y == 0)
                        {
                                _putchar('0');
                                continue;
                        }
                        _putchar(',');
                        _putchar(' ');

                        if (m / 10 == 0)
                                _putchar(' ');
                        else
                                _putchar((m / 10) + '0');
                        _putchar((m % 10) + '0');
                }
                _putchar('\n');
        }
}
