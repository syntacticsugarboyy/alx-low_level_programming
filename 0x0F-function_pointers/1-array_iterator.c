#include "function_pointers.h"

/**
 * array_iterator - iterates an array
 * @array: array to be iterated
 * @size: array size
 * @action: function pointer
 *
 * Description: A function that that executes a function in an array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if ((*action) != NULL)
	{
		for (index = 0; index < size; index++)
		{
			(*action)(array[index]);
		}
	}
}
