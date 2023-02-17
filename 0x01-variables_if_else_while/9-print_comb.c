#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program will print all numbers to base 10,
 * and add comma and space'
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

