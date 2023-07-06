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
	listint_t *temp = (*head);
	listint_t *prev = NULL;
	listint_t *front = NULL;

	for (; temp != NULL;)
	{
		front = temp->next;
		temp->next = prev;
		prev = temp;
		temp = front;
	}

	(*head) = prev;

	return (temp);
}
