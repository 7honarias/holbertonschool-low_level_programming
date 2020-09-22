#include "holberton.h"
#include <stdlib.h>
/**
 * main - Print a string using the provided function _putchar
 * Return: Always 0 (Success)
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
