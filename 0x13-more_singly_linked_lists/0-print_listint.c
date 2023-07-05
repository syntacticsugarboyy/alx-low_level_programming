#include "lists.h"

/**
 * print_listint - prints a list
 * @h: Pointer to the head of the node
 *
 * Description: A function that prints a linked list
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
