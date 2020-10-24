#include "variadic_functions.h"

/**
 * sum_them_all - sum all its parameters
 * @n: numbers to sum
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i = 0;
	unsigned int count;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (count = 0; count < n; count++)
		i += va_arg(ap, unsigned int);
	va_end(ap);
	return (i);
}
