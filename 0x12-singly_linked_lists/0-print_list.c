#include "lists.h"

/**
 * print_list - prints a list
 * @h: pointer to list head
 *
 * Description: A function that prints a linked list
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		num++;
	}
	return (num);
}
