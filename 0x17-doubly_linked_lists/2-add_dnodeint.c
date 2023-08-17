#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a dlistint_t list.
 * @head: pointer to beginning of a doubly linked list
 * @n: data for the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	temp = *head;
	new->next = temp;
	temp->prev = new;
	*head = new;


	return (new);
}
