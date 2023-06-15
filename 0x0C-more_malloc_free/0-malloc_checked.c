#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size passed in bytes
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
