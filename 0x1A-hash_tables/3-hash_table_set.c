#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: table to added in
 * @key: key of the element to be added
 * @value: value corresponding to @key
 *
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node = malloc(sizeof(hash_node_t)), *temp;

	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (node->key == NULL || node->value == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}
	node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if(strcmp(temp->key, key) == 0)
			{
				free(node->key);
				free(node->value);
				free(node);
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
