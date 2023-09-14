#include "hash_tables.h"

/**
 * hash_table_get - gets data from a hash table
 * @ht: pointer to head of the hash table
 * @key: Key of the node
 *
 * Return: ...
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *get;

	if (!ht || key || !*key)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *) key, ht->size);

	if ((ht->array)[index] == NULL)
		return (NULL);

	get = (ht->array)[index];

	while (get != NULL)
	{
		if (strcmp(get->key, key) == 0)
			return (get->value);

		get = get->next;
	}

	return (NULL);
}
