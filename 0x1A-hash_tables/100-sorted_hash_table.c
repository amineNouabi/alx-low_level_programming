#include "hash_tables.h"


/**
 * shash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;

	hash_table = malloc(sizeof(shash_table_t));
	if (!hash_table)
		return (0);

	hash_table->size = size;
	hash_table->shead = hash_table->stail = 0;
	hash_table->array = malloc(size * sizeof(shash_node_t *));
	if (!hash_table->array)
	{
		free(hash_table);
		return (0);
	}

	return (hash_table);
}

/**
 * create_shash_node - create a new node
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 1 on success, 0 on failurre
 */
shash_node_t *create_shash_node(const char *key, const char *value)
{
	shash_node_t *shash_node;

	shash_node = malloc(sizeof(shash_node_t));

	if (!shash_node)
		return (0);

	shash_node->key = _strdup(key);
	shash_node->value = _strdup(value);
	shash_node->next = shash_node->snext = shash_node->sprev = 0;

	return (shash_node);
}


/**
 * shash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 1 on success, 0 on failurre
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	shash_node_t *new_node, *cursor;

	if (!ht || !ht->array || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	cursor = *(ht->array + index);
	while (cursor)
	{
		if (!strcmp(cursor->key, key))
		{
			free(cursor->value);
			cursor->value = _strdup(value);
			return (1);
		}
		cursor = cursor->next;
	}

	new_node = create_shash_node(key, value);
	if (!new_node)
		return (0);

	sht_insert_node(ht, new_node);
	new_node->next = *(ht->array + index);
	*(ht->array + index) = new_node;
	return (1);
}


/**
 * sht_insert_node - insert a node in a sorted doubly linked list
 *	for sorted hash map.
 * @sht: Sorted hash table
 * @node: Node to insert.
 */
void sht_insert_node(shash_table_t *sht, shash_node_t *node)
{
	shash_node_t *next = 0, *cursor = 0;

	if (!sht || !sht->array)
		return;
	if (!sht->shead)
	{
		sht->shead = sht->stail = node;
		return;
	}
	if (strcmp(sht->shead->key, node->key) > 0)
	{
		node->snext = sht->shead;
		sht->shead->sprev = node;
		sht->shead = node;
		return;
	}
	cursor = sht->shead;
	while (cursor)
	{
		if (!cursor->snext)
		{
			sht->stail = cursor->snext = node;
			node->sprev = cursor;
			break;
		}
		else if (strcmp(cursor->snext->key, node->key) > 0)
		{
			next = cursor->snext;
			cursor->snext = node;
			node->snext = next;
			node->sprev = cursor;
			if (!next)
				sht->stail = node;
			else
				next->sprev = node;
			break;
		}
		cursor = cursor->snext;
	}
}




/**
 * shash_table_print - prints ths sorted hash table in order.
 * @ht: hash table to look into.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *cursor;

	if (!ht || !ht->array)
		return;

	printf("{");
	cursor = ht->shead;
	while (cursor)
	{
		printf("'%s': '%s'", cursor->key, cursor->value);
		cursor = cursor->snext;
		if (cursor)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the sorted hash table in reversed order.
 * @ht: hash table to look into.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *cursor;

	if (!ht || !ht->array)
		return;

	printf("{");
	cursor = ht->stail;
	while (cursor)
	{
		printf("'%s': '%s'", cursor->key, cursor->value);
		cursor = cursor->sprev;
		if (cursor)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Frees a hash table.
 * @ht: hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *cursor, *next;

	if (!ht)
		return;

	if (!ht->array)
	{
		free(ht);
		return;
	}

	cursor = ht->shead;
	while (cursor)
	{
		next = cursor->snext;
		if (cursor->value)
			free(cursor->value);
		if (cursor->key)
			free(cursor->key);
		free(cursor);
		cursor = next;
	}

	free(ht->array);
	free(ht);
}


/**
 * _strlen - calculates length of a string
 * @s: String
 * Return: Number of characters in string
 */
unsigned int _strlen(const char *s)
{
	unsigned int count = 0;

	while (s[count++])
		;

	return (--count);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to be copied.
 * Return: pointer to the duplicated string.
 */
char *_strdup(const char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (!str)
		return (0);

	len = _strlen(str);

	dup = malloc(len + 1);

	if (!dup)
		return (0);

	i = 0;
	while ((dup[i++] = str[i]))
		;

	return (dup);
}

/**
 * key_index - Gives the index of a key
 * @key: Key to find
 * @size: Size of the array of the hash table
 *
 * Return: Index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm
 * @str: String to hash
 *
 * Return: Hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = hash * 33 + c;

	return (hash);
}
