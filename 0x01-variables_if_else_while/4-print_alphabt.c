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
	char alphabet = 'a';
		while (alphabet <= 'z')
		{
			if ((alphabet == 'e') || (alphabet == 'q'))
			{
				continue;
			}
			putchar(alphabet);
			alphabet++;
		}
	putchar('\n');
	return (0);
}
