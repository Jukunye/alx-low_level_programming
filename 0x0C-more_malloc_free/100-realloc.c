#include <stdlib.h>

/**
 * _realloc - function that reallocate a memory block using malloc and free
 *
 * @ptr: pointer to previous memory
 * @old_size: old memory size
 * @new_size: new memory size
 *
 * Return: pointer to new memory or NULL if it fails
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new, *temp_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		free(ptr);
		return (new);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);

	temp_ptr = ptr;

	for (i = 0; i < old_size; i++)
		new[i] = temp_ptr[i];

	free(ptr);
	return (new);
}
