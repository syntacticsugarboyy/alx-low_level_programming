#include "main.h"

/**
 * swap_int - swaps integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 *
 * Description: A function that sawps the values of two ints
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int *c;

	c = &b;

	b = a;
	a = c;

}

