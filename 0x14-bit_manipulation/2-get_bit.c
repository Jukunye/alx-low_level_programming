#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to extract the bit from
 * @index: the index of the bit to extract
 *
 * Return: the value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Shift n to the right by index, isolating the bit at the given index */
	/* Apply a mask with a single 1 bit in the least significant position */
	return ((n >> index) & 1);
}

