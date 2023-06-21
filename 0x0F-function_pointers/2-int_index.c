#include "function_pointers.h"

/**
 * int_index - indexes integers
 * @array: array to be indexed
 * @size: size of array
 * @cmp: function pointer
 *
 * Description: A function that searches for an integer
 *
 * Return: the index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array != NULL && (*cmp) != NULL)
	{
		for (index = 0; index < size; index++)
		{
			if ((*cmp)(array[index]) != 0)
			{
				return (index);
			}
		}
	}
	return (-1);
}
