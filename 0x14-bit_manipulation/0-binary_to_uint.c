#include "main.h"

/**
 * binary_to_uint - changes a binary to an unsigned int
 * @b: Pointer to a binary string
 *
 * Return: the resulting unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int pow = strlen(b);
	int index;
	int deci = 1;

	for (index = (pow - 1); index >= 0; index--)
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}

		if (b[index] == '1')
		{
			uint += deci;
		}
			deci *= 2;
	}

	return (uint);
}
