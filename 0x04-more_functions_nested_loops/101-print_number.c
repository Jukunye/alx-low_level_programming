#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */
void print_number(int n)
{
	int curr;

	if (n < 0)
	{
		_putchar('-');
	}

	curr = n % 10;
	if (curr < 0)
		curr = -curr;
	if (n / 10 != 0)
	{
		if (n < 0)
		{
			print_number(n / -10);
		}
		else
		{
			print_number(n / 10);
		}
		_putchar(curr + '0');
	}
	else
	{
		_putchar(curr + '0');
	}
}
