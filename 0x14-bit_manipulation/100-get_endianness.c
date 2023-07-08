#include "main.h"

/**
 * get_endianness - checks for endianness
 *
 * Return: 1 or 0
 */

int get_endianness(void)
{
	unsigned int index = 1;
	char *c = (char *) *index;

	return (*c);
}
