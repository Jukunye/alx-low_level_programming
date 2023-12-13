#include "search_algos.h"

/**
 * interpolation_search - uses interpolation search algorithm
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index where value is located, otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (low < high)
	{
		pos = low + (((double)(high - low) / (
		array[high] - array[low])) * (value - array[low]));

		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
			return (pos);
		else if (value < array[pos])
			high = pos - 1;
		else
			low = pos + 1;
	}

	return (-1);
}
