#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
11;rgb:0000/0000/0000* delete_nodeint_at_index - delete node at a given index
 * @head: pointer at the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if successful, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *itr;

	if (head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}
	while (index > 1)
	{
		itr = ptr->next;
		if (itr == NULL)
			return (-1);
		index--;
		ptr = itr;
	}
	itr = ptr->next;
	ptr->next = itr->next;
	return (1);
}
