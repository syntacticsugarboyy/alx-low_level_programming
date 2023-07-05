#include "lists.h"

/**
 * free_listint - frees a list
 * @head: Pointer to the head
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
