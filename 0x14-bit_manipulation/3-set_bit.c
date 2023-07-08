#include "main.h"

/**
 * set_bit - seta a bit
 * @n: Number
 * @index: index
 *
 * Description: A function that sets a bit at an index
 *
 * Return: 1 or (-1)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (*n > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);

	return (1);
}
