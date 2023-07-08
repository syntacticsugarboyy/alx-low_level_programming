#include "main.h"

/**
 * clear_bit - clears a bit
 * @n: Pointer to number
 * @index: index of number
 *
 * Return: int...
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);

	return (1);
}
