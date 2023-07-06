#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number
 * @m: number
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif;
	int count;

	dif = n ^ m;
	count = 0;

	while (dif)
	{
		count++;
		dif &= (dif - 1);
	}

	return (count);
}

