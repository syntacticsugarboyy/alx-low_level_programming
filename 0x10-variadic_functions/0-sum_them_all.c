#include "variadic_functions.h"

/**
 * sum_them_all - sums arguments
 * @n: number of arguments
 *
 * Description: A function that returns sum
 *		of all its oarameters
 *
 * Return: result
 */

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int index;

	va_list args;

	va_start(args, n);

	if (n != 0)
	{
		for (index = 0; index < n; index++)
		{
			result += va_arg(args, int);
		}
		return (result);
	}

	else
	{
		return (0);
	}
}
