#include "main.h"

/**
 * _sqrt_recursion - square root
 * @n: number to be rooted
 *
 * Description: A function that returns the natural root of n
 *
 * Return: root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - square root
 * @n: integer
 * @r: root
 *
 * Return: 0
 */

int _sqrt(int n, int r)
{
	int square;

	square = r * r;

	if (square > n)
	{
		return (-1);
	}

	if (square == n)
	{
		return (r);
	}

	return (_sqrt(n, r + 1));
}
