#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'this program will print alphabets x10'
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int a;
	int n = 1;

	while (n <= 10)
	{
	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	n++;
	_putchar('\n');
	}
}
