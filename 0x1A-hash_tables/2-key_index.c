#include "hash_tables.h"

/**
 * key_index - evaluates the index of a key
 * @key: key of the value to be added
 * @size: size of the table
 *
 * Return: index of the table to be inserted in
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
