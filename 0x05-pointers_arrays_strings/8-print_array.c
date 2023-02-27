#include <stdio.h>
#include "main.h"

/**
 * print_array - function with two argument
 * @a: first argument pointer
 * @n: second
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
