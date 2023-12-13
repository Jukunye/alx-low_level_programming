#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index where value is located, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, i = 0, val = -1;

	if (array == NULL || size == 0)
		return (val);

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");

	mid = (size / 2);
	if (size % 2 == 0)
		mid = mid - 1;

	if (array[mid] == value)
		val = value;
	else if (value < array[mid])
		val = binary_search(array, mid, value);
	else if (value > array[mid])
		val = binary_search(array + mid + 1, size - mid - 1, value);

	return (val);
}
