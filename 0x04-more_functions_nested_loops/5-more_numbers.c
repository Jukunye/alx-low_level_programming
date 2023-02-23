#include "main.h"

/**
 * more_numbers - print numbers from 0 to 9
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	i = j = 0;

	for (; i < 10; i++)
	{
	for (; j <= 14; j++)
	{
		if (j >= 10)
			_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
	}
	_putchar('\n');
	j = 0;
	}
}
