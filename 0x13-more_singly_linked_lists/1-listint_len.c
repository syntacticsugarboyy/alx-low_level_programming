#include "lists.h"

/**
 * listint_len - lengths a list
 * @h: POinter to the head node
 *
 * Description: A function that prints number of nodes in a linked list
 *
 * Return: Number of nodes(num_nodes)
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
