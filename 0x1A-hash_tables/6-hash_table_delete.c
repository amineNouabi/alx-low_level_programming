#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cursor, *next;
	unsigned long index;

	if (!ht)
		return;

	if (!ht->array)
	{
		free(ht);
		return;
	}

	index = 0;
	while (index < ht->size)
	{
		cursor = *(ht->array + ++index);
		while (cursor)
		{
			next = cursor->next;
			if (cursor->key)
				free(cursor->key);
			if (cursor->value)
				free(cursor->value);
			free(cursor);
			cursor = next;
		}
	}
	free(ht);
}
