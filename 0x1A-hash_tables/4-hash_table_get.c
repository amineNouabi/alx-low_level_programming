#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table to look into
 * @key: Key to look for
 *
 * Return: Value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cursor;
	unsigned long index;

	if (!ht || !ht->array || !key || !*key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	cursor = *(ht->array + index);

	while (cursor)
	{
		if (!strcmp(key, cursor->key))
			return cursor->value;
		cursor = cursor->next;
	}
	return (0);
}
