#include "lists.h"
/**
 * get_dnodeint_at_index - finds the nth node of a list.
 * @head: pointer to list
 * @index:  index
 *
 * Return: nth node otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i != index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
