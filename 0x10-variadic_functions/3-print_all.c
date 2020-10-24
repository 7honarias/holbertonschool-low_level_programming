#include "variadic_functions.h"

/**
 * print_all - function that print anything
 * @format: format to work
 * Return: Nothing.
 */



void print_all(const char * const format, ...)
{
	int i, j;
	char *p = "";
	op_t options[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list arg;

	va_start(arg, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (options[j].str != NULL)
		{
			if (format[i] == options[j].str[0])
			{
				printf("%s", p);
				options[j].option(arg);
				p = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);




}

/**
 * print_char - print chars
 * @arg: type argument
 * Return: Nothing
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - print chars
 * @arg: type argument
 * Return: Nothing
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * print_float - print chars
 * @arg: type argument
 * Return: Nothing
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * print_string - print chars
 * @arg: type argument
 * Return: Nothing
 */
void print_string(va_list arg)
{
	char *p;

	p = va_arg(arg, char*);
	if (p == NULL)
	{
		p = "(nil)";
	}
	printf("%s", p);
}
