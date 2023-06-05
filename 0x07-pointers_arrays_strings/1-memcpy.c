#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes to copy
 *
 * Description: A function that copies memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; n--)
	{
		dest[index] = src[index];

		index++;
	}

	return (dest);
}
