#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 *
 * @ht: Hash Table under consideration
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
	{
		return;
	}

	/* Loop through the array */
	for (index = 0; index < ht->size; index++)
	{
		/* Loops through the linked list(if there is) */
		while (ht->array[index] != NULL)
		{
			temp = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = temp;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
