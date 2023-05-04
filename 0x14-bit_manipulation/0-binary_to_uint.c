#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, otherwise 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i, len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
			result = (result << 1) | 0;
		else if (b[i] == '1')
			result = (result << 1) | 1;
		else
			return (0);
	}
	return (result);
}
