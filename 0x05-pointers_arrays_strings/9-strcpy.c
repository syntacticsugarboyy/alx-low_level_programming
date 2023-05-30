#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: destination pointer
 * @src: source pointer
 *
 * Description: A function that copies string from src to dest
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
