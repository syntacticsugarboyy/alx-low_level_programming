#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument variable
 *
 * Description: A program that prints all arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}
