#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: element to add to the new node
 *
 * Return: address of new node else NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i;

	current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = current;
		*head = new;
	}

	for (i = 0; i < idx - 1 && head != NULL; i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	new->next = current->next;
	current->next = new;

	return (new);
}


