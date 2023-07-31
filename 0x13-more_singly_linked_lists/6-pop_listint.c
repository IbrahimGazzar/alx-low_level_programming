#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the linked list
 *
 * Return: head node's data, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int num;

	if (head == NULL || *head == NULL)
		return (0);
	num = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (num);
}
