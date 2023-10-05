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
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);
	node->key = malloc(sizeof(char) * (strlen(key) + 1));
	node->value = malloc(sizeof(char) * (strlen(value) + 1));
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			strcpy(ht->array[index]->value, value);
		else
		{
			node->next = ht->array[index];
			ht->array[index] = node;
		}
	}
	return (1);
}
