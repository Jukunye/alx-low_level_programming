#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program will print all numbers to base 10,
 * and add comma and space'
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

