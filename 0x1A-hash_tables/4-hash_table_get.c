#include "hash_tables.h"

/**
 * hash_table_get - gets a hash table...
 *
 * @ht: Hash Table.
 * @key: Key to look for.
 *
 * Description: A function that retrieves a value associated with a key.
 *
 * Return: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0
			|| key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}

	/* Gets the key's spot in the array */
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	/* Loops through the linked list at that particular array spot */
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
