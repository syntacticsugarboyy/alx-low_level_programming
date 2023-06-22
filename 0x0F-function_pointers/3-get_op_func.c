#include "3-calc.h"

/**
 * get_op_func - gets function
 * @s: pointer to function
 * @a: First number
 * @b: Second number
 *
 *
 * Description: A function that selects a function
 *
 * Return: int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}

	return (ops[i].f);
}
