#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to starting node
 * @n: integer to add
 *
 * Return: address to the new element of NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	new->n = n;

	*head = new;

	return (*head);
}
