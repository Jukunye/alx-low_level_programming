#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'this program prints alphabets a to z except q and e'
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char al;
		for (al = 'a'; al <= 'z'; al++)
		{
			if (al == 'e' || al == 'q')
			{
				continue;
			}
		putchar(al);
		}
	putchar('\n');
	return (0);
}
