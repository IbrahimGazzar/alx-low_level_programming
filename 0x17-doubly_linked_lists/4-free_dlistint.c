#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: start of the list to be freed
 *
 * Return: no return value
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
		return;
	ptr = head->next;
	while (ptr != NULL)
	{
		free(head);
		head = ptr;
		ptr = ptr->next;
	}
	free(head);
}
