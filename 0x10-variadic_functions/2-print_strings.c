#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: is the string to be printed between strings
 * @n: is the number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list string;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(string);
	printf("\n");
}
