#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor
 * "612852475143"
 * Return: Always 0
 */
int main(void)
{
	lont int i, n, d;

	n = 612852475143;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n == i)
			{
				printf("%ld\n", i);
				break;
			}
			d = n / i;
			n = d;
			i = 1;
		}
	}
	return (0);
}
