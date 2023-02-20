#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'this program prints alphabets z to a'
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char alphabet = 'z';
		while (alphabet >= 'a')
		{
			putchar(alphabet);
			alphabet--;
		}
	putchar('\n');
	return (0);
}
