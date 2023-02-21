#include "main.h"

/**
 * print_last_digit - checks last digit
 * @n: The number to be treated
 * Return: 0 Always
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
