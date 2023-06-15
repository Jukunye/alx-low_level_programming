#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte passed
 * @p: pointer to memory
 * @b: char to fill with
 * @n: number of times (Limit)
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *p, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		p[i] = b;
	}

	return (p);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mptr = malloc(size * nmemb);

	if (mptr == NULL)
		return (NULL);

	_memset(mptr, 0, nmemb * size);

	return (mptr);
}
