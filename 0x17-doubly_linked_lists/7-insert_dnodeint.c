#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to list
 * @idx: index
 * @n: data
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *temp = *h, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || temp == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	while (i != idx)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	current = temp->prev;

	current->next = new;
	new->prev = temp->prev;
	new->next = temp;
	temp->prev = new;
	return (new);
}
