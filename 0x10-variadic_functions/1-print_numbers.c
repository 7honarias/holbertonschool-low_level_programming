#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: array for separator
 * @n: numbers to print
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
