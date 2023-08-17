#include "lists.h"

/**
 * free_dlistint - frees a list.
 * @head: pointer to list
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	head = NULL;
}
