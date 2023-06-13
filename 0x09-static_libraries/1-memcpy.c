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
	char *ptr = dest;

	while (n > 0)
	{
		*ptr = *src;
		src++;
		ptr++;
		n--;
	}
	return (dest);
}
