#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: A program that multiplies two arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int arg1 = atoi(argv[1]);
		int arg2 = atoi(argv[2]);
		int mul = arg1 * arg2;

		printf("%d\n", mul);

		return (0);
	}
}
