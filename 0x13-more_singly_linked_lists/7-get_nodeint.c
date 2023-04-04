#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node in a linked list
 * @head: pointer to first node
 * @index: index of the node, from 0
 *
 * Return: the node else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
