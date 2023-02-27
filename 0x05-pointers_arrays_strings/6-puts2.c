#include <stdio.h>

/**
 * puts2 - prints characters in a string
 * @str: string
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
