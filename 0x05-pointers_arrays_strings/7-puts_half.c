#include <stdio.h>

/**
 * puts_half - print half of a string
 * @str: string
 * Return: nothing
 */

void puts_half(char *str)
{
	int len = 0;
	char *p = str;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	int start;

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2;
	}
	p = str + start;

	while (*p != '\0')
	{
		putchar(*p);
		p++;
	}
	putchar('\n');
}
