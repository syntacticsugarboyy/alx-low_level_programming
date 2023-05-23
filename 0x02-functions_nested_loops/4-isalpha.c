#include "main.h"

/**
 * _isalpha - checks for alpha
 * @c: character to be checked
 *
 * Description: A function that checks for alphabets
 *
 * Return: 1 if upper or lowercase
 *	Or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
