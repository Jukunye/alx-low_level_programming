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
	if (new == NULL || h == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	for (; i != idx; i++)
	{
		if (temp->next == NULL)
		{
			if (i == idx - 1)
			{
				new = add_dnodeint_end(h, n);
				return (new);
			}
			else
			{
				free(new);
				return (NULL);
			}
		}
		temp = temp->next;
	}
	current = temp->prev;
	current->next = new;
	new->prev = temp->prev;
	new->next = temp;
	temp->prev = new;
	return (new);
}
