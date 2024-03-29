#include "main.h"

/**
 * _memset - fills memory
 * @s: pointer to area in memory
 * @b: byte to fill memory
 * @n: number of bytes to fill
 *
 * Description: A function that fills memory with a constant byte
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; n--)
	{
		s[index] = b;

		index++;
	}

	return (s);
}
