#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: Hash Table under consideration
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;
	char *sep;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	sep = "";

	/* Loops throught the array */
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];

		/* Loops throught the linked list(if there is) */
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", sep, temp->key, temp->value);
			sep = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
