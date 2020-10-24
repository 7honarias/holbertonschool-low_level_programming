#include "variadic_functions.h"

/**
 * print_strings - that prints strings
 * @separator: for separator ,
 * @n: number of strings
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *p;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(str, char*);
		if (p)
		{
		printf("%s", p);
		}
		else
		{
			printf("(nil)");
		}
		if (i != (n - 1 && separator != NULL))
		{
			printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");

}
