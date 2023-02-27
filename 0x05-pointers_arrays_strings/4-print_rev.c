#include <stdio.h>

/**
 * print_rev - prints string in reverse order
 * @s: is a parameter
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (len > 0)
	{
		putchar(*s);
		s--;
		len--;
	}
	putchar('\n');
}

