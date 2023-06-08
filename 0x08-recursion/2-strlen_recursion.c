#include "main.h"

/**
 * _strlen_recursion - strlen with recursion
 * @s: pointer to the string
 *
 * Description: A function that uses recursion to check string length
 *
 * Return: len
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
