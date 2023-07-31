#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to NULL
 * @head: address of the start of the function
 *
 * Return: no return value
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *next;

	ptr = *head;
	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
	*head = NULL;
}
