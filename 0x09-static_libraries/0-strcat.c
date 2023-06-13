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
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
		dest_ptr++;


	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
	return (dest);
}
