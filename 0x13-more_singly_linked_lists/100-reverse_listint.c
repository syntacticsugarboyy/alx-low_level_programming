#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: Pointer to head node
 *
 * Description: A function that reverses a linked list
 *
 * Return: ...
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *front = NULL;

	for (; *head != NULL;)
	{
		front = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = front;
	}

	(*head) = prev;

	return (*head);
}
