#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'this program prints 1 - 10 using putchar'
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
