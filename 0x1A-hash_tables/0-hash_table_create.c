#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size pf the array
 *
 * Return: *new_hash_tab
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_tab;
	unsigned int table = 0;

	new_hash_tab = malloc(sizeof(hash_table_t));
	if (!new_hash_tab)
	{
		return (NULL);
	}

	(new_hash_tab)->size = size;
	(new_hash_tab)->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	if ((new_hash_tab)->array == NULL)
	{
		free(new_hash_tab);
		return (NULL);
	}

	for (table = 0; table < (new_hash_tab)->size; table++)
	{
		(new_hash_tab)->array[table] = NULL;
	}
	return (new_hash_tab);
}
