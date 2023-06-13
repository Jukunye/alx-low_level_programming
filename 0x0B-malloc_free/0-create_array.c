#include<stdlib.h>
#include"main.h"

/**
 * create_array - creates an array of chars, and initializes
 *                it with a specific char
 * @size: is the number of elements
 * @c: character to be stored in the array
 *
 * Return: a pointer to the array, or Null if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
