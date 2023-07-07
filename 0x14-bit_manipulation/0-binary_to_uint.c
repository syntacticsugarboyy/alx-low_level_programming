#include "main.h"

/**
 * binary_to_uint - changes a binary to an unsigned int
 * @b: Pointer to a binary string
 *
 * Return: the resulting unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int deci = 0;

	if (!b)
	{
		return (0);
	}
	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
		{
			return (0);
		}
			deci = 2 * deci + (b[index] - '0');
	}

	return (deci);
}
