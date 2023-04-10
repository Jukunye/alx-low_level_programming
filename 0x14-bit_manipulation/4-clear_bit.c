#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: is the index, starting from 0
 * @n: pointer
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;
	return (1);
}
