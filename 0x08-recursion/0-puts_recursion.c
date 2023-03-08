#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: is a pointer to string
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
