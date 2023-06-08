#include "main.h"

/**
 * _pow_recursion - power of recursion
 * @x: number to be powered
 * @y: power
 *
 * Description: A function that raises x to power y
 *
 * Return: power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, (y - 1)));
}
