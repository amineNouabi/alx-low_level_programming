#include "hash_tables.h"


void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cursor;
	unsigned long int index;
	int comma;

	if (!ht)
		return;

	index = comma = 0;
	printf("{");
	while (index < ht->size)
	{
		cursor = *(ht->array + index++);
		while (cursor)
		{
			printf("'%s': '%s'", cursor->key, cursor->value);
			if ((cursor = cursor->next))
				printf(", ");
			else
				comma = 1;
			
		}
		if (comma && *(ht->array + index))
			printf(", ");
	}
	printf("}\n");
}
