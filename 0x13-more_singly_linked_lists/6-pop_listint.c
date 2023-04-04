#include "lists.h"

/**
 * pop_listint - deletes head of the node
 *
 * @head: pointer to the first node
 *
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp, *next;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	next = temp->next;

	free(temp);

	*head = next;

	return (data);
}
