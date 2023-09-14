#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a doubly linked list
 * @head: list to be inserted in
 * @n: int to be put in the new node
 *
 * Return: address of the new node, NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = node;
		node->prev = ptr;
	}
	return (node);
}
