#include "search_algos.h"

/**
 * jump_search - uses jump search algorithm to search
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: first index where value is located, otherwise (-1).
 */
int jump_search(int *array, size_t size, int value)
{
	size_t j, prev = 0, i = 0, step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (i < size)
	{

		if (value <= array[i])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev, i);
			for (j = prev; j <= i; j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (value == array[j])
					return (j);
			}
		}

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		prev = i;
		i += step;

	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, i);

	return (-1);
}
