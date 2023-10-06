#include "hash_tables.h"

/**
 * hash_table_delete - cleanly delete a hash table
 * @ht: hash table to be deleted
 *
 * Return: no return value
 */

void hash_table_delete(hash_table_t *ht)
{
	size_t i;
	hash_node_t *temp, *ex_temp;

	if (ht != NULL)
	{
		if (ht->array != NULL)
		{
			for (i = 0; i < ht->size; i++)
			{
				temp = ht->array[i];
				while (temp != NULL)
				{
					ex_temp = temp;
					free(temp->key);
					free(temp->value);
					temp = temp->next;
					free(ex_temp);
				}
			}
			free(ht->array);
		}
		free(ht);
	}
}
