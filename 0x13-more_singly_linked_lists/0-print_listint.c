#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the content of a list of ints
 * @h: the int list to be printed
 *
 * Return: size of the list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t len;

	if (h == NULL)
		return (0);

	ptr = h;
	len = 0;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		len++;
		ptr = ptr->next;
	}
	return (len);
}
