#include "lists.h"

/**
 * sum_dlistint - adds up all data(n) of a list.
 * @head: pointer to list
 *
 * Return: the sum otherwise 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
