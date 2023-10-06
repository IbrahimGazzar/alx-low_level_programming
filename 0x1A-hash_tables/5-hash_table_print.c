#include "hash_tables.h"

/**
 * hash_table_print - prints an entire hash table
 * @ht: hash table to be printed
 *
 * Return: no return value
 */

void hash_table_print(const hash_table_t *ht)
{
	size_t i;
	hash_node_t *temp;
	int x = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (x != 0)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			if (x == 0)
				x = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
