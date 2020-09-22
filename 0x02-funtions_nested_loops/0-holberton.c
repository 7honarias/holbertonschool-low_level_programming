#include "holberton.h"
#include <stdlib.h>
/**
 * main principal
 *
 * return 0 success
 *
 */
int main(void)
{
	char name[] = "Holberton\n";
	int x = 0;

	while (x < 9)
	{
		_putchar(name[x]);
		x++;
	}
	_putchar('\n');
	return (0);
}
