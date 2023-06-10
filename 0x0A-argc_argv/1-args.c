#include "main.h"

/**
 * main - Entru point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: A program that prints argument count
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);
}
