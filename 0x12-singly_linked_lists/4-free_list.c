#include "lists.h"

/**
 * free_lists - frees a  list
 * @head: head list
 *
 * Return: nothing
 */
void free_lists(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
