#include "lists.h"

/**
 * print_listint - a function that prints all elements of a list
 *
 * @h: pointer to first
 *
 * Return: no. nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t node_count = 1;


	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		node_count++;
	}

	/*print the last node*/
	printf("%d\n", h->n);

	return (node_count);
}
