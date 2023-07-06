#include "lists.h"

/**
 * print_listint - prints a list
 * @h: Pointer to the head node
 *
 * Description: A function that prints a linked list
 *
 * Return: num_node
 */

size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_node++;
		h = h->next;
	}
	return (num_node);
}
