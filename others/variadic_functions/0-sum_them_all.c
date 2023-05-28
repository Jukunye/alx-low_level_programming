#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums up all its parameters
 * @n: integer
 *
 * Return: the sum of all its parameters otherwise
 * if n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
