#include "main.h"

/**
 * create_array - creates an array
 * @size: size of array to be made
 * @c: character to initialize the array
 *
 * Description: A function that creates and initializes an array
 *
 * Return: a pointer to the array, or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int index;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		ptr[index] = c;
	}

	return (ptr);
}
