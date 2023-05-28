#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: pointer to the first node
 * @n: element to add
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next; /* loop to the last node */

		temp->next = new;
	}
	return (*head);
}


