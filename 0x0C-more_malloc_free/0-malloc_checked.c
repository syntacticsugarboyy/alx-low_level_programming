#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: int
 *
 * Description: A function that allocates memory using malloc
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit (98);
	}

	return (mem);
}
