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
	char *p;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(str, char *);
		if (p)
		{
			printf("%s", p);
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
	va_end(str);
	printf("\n");
}
