#include "lists.h"

/**
 * sum_listint - sums values in a linked list
 * @head: Pointer to the head node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int run_sum = 0;
	listint_t *temp = head;

	if (head == NULL)
	{
		return (0);
	}

	for (; temp != NULL;)
	{
		run_sum += temp->n;
		temp = temp->next;
	}

	return (run_sum);
}
