#include "main.h"

/**
 * _islower - checks for lower
 * @c: Character to be checked
 *
 * Description: A function that checks for lowercase characters
 *
 * Return: 1 if c is lowercase
 *		Or 0 if otherwise
 */

int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
