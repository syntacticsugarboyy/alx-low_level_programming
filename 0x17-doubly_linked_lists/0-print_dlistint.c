#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: Pointer tp head node
 *
 * Return: num_nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	size_t count;

	current = (dlistint_t *)h;
	count = 0;

	while (current != NULL)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
