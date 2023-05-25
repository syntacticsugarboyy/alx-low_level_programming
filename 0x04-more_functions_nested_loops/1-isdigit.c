#include "main.h"

/**
 * _isdigit - is a digit
 * @c: int to be checkeed
 *
 * Description: A function that checks for a digit between 0 and 9
 *
 * Return: 1 if c is a digit
 *	Or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
