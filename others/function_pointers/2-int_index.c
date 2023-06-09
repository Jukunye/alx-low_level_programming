#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array containing the integer
 * @size: is the number of elements
 * @cmp: is a pointer a function
 *
 * Return: the index of the first element for which the cmp function
 * does not return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	}
	return (-1);
}
