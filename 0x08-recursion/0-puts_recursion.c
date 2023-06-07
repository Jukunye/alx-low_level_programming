#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string
 * @str: is a pointer to string
 *
 * Return: nothing
 */
void _puts_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*str);
		_puts_recursion(str + 1);
	}
}
