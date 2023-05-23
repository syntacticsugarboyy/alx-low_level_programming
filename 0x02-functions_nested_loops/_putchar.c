#include "main.h"

/**
 * _putchar - writes char c to stdout
 * @c: character to print
 *
 * Description: A function that writes the character c to stdout
 *
 * Return: On success 1
 *	On error, -1 is returned, and errno is set appropriately
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
