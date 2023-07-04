#include "lists.h"

/**
 * free_list - frees a list
 * @head: Pointer to head node
 *
 * Description: A function that frees a list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *runs;
	list_t *next;

	runs = head;

	while (runs != NULL)
	{
		next = runs->next;
		free(runs->str);
		free(runs);
		runs = next;
	}
}
