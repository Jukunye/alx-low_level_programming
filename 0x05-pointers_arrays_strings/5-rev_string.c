#include <stdio.h>

/**
 * rev_string - prints string in reverse
 * @s: character string
 * Return: nothing
 */

void rev_string(char *s)
{
	int len = 0;
	char *p = s;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	p--;
	while (s < p)
	{
		char temp = *s;
		*s = *p;
		*p = temp;
		s++;
		p--;
	}
}
