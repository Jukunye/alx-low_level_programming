#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 otherwise.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i = 0;

	if (!b)
		return (0);

	while ((b[i] == '1') || (b[i] == '0'))
	{
		uint <<= 1;
		uint += b[i] - '0';
		i++;
	}
	return (uint);
}
