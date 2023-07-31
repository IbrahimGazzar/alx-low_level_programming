#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: list to be inserted in
 * @idx: index of the new node's position
 * @n: int content of the new node
 * Return: address of the new node, NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	ptr = *head;
	while (idx > 1)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		idx--;
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
