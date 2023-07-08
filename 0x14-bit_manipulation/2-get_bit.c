#include "main.h"

/**
 * get_bit - gets bit
 * @n: Decimal
 * @index: Required index
 *
 * Description: A function that returns value of a bit at an index
 *
 * Return: the value...
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
	{
		return (-1);
	}

	val = (n >> index) & 1;

	return (val);
}
