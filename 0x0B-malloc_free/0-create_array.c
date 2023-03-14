#include<stdlib.h>
#include"main.h"

/**
 * create_array - creates an array of chars, and initializes
 *                it with a specific char
 * @size: is the number of elements in the array
 * @c: character to be stored in the array
 *
 * Return: a pointer to the array, or Null if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
