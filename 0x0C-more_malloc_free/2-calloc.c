#include "main.h"

/**
 * _calloc - allocates memory
 * @nmemb: number of elements
 * @size: array size
 *
 * Description: A memory allocation function that uses malloc
 *
 * Return: call
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *call;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	call = malloc(size * nmemb);

	if (call == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < (nmemb * size); index++)
	{
		call[index] = 0;
	}

	return (call);
}
