#include "main.h"

/**
 * factorial - calculates a factorial
 * @n: number to be factorialed
 *
 * Description:A function that returns the factorial of a number
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
