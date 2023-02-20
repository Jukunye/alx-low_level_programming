#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'this program prints alphabets a to z'
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'A';
		while (alphabet <= 'z')
		{
			putchar(alphabet);
			alphabet++;
		}
		while (ALPHABET <= 'Z')
		{
			putchar(ALPHABET);
			ALPHABET++;
		}
	putchar('\n');
	return (0);
}
