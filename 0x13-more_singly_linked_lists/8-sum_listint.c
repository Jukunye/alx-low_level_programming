#include "lists.h"

/**
 * sum_listint - finds the sum
 * @head: pointer to first node
 *
 * Return: sum of all the data(n).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
