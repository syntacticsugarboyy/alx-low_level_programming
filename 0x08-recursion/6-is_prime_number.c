#include "main.h"

/**
 * is_prime_number - checks if is a prime number
 * @n: number to be checked
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}

	if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0)
	{
		return (1);
	}

	return (0);
}
