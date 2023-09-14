#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node in a given index
 * @h: doubly linked list to be inserted in
 * @idx: index to be inserted at
 * @n: data of the new node
 *
 * Return: address of the new node, NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	dlistint_t *node;

	if (h == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	if (idx == 0)
	{
		node->next = *h;
		if (*h != NULL)
			(*h)->prev = node;
		node->prev = NULL;
		*h = node;
		return (*h);
	}
	while (idx > 1)
	{
		ptr = ptr->next;
		if (ptr == NULL)
		{
			free(node);
			return (NULL);
		}
		idx--;
	}
	if (ptr == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = ptr->next;
	node->prev = ptr;
	if (ptr->next != NULL)
		(ptr->next)->prev = node;
	ptr->next = node;
	return (node);
}
