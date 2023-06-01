#include "main.h"

/**
 * _strcat - catenates strings
 * @dest: Desctination string
 * @src: Source string
 *
 * Description: A function that concatenates two strings
 *
 * Return: catenated string
 */

char *_strcat(char *dest, char *src)
{
	int dest_str;
	int src_str;

	for (dest_str = 0; dest[dest_str] != '\0'; dest_str++)
	{
	}

	for (src_str = 0; src[src_str] != '\0'; src_str++)
	{
		dest[dest_str] = src[src_str];

		dest_str++;
	}
	dest[dest_str] = '\0';

	return (dest);
}
