#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at a given index
 * @head: list containing the node to be deleted
 * @index: index of the node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		if ((*head)->next != NULL)
			((*head)->next)->prev = NULL;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (ptr != NULL)
	{
		if (i == index)
		{
			if (ptr->prev != NULL)
				(ptr->prev)->next = ptr->next;
			if (ptr->next != NULL)
				(ptr->next)->prev = ptr->prev;
			free(ptr);
			return (1);
		}
		i++;
		ptr = ptr->next;
	}
	return (-1);
}
