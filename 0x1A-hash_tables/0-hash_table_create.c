#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: Pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int n;

	/* Allocates Space for The Table */
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}

	/* Assigns data to the node */
	table->size = size;

	/* Creates space for the array of nodes*/
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		return (NULL);
	}

	/* Fills the table with NULL */
	for (n = 0; n < table->size; n++)
	{
		table->array[n] = NULL;
	}

	return (table);
}
