#include "main.h"

/**
 * _isupper - checks for upper
 * @c: character to be checked
 *
 * Description: A function that checks for uppercase character
 *
 * Return: 1 if uppercase
 *	Or 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
