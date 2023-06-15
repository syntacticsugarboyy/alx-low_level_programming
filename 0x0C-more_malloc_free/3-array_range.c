#include "main.h"

/**
 * array_range - creates an array
 * @min: minimum number
 * @max: max number
 *
 * Description: A function that creates an array of integers
 *
 * Return: range
 */

int *array_range(int min, int max)
{
	int *range;
	int index;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	range = malloc(sizeof(int) * size);

	if (range == NULL)
	{
		return (NULL);
	}

	for (index = 0; min <= max; index++)
	{
		range[index] = min++;
	}

	return (range);
}
