#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints sizes of datatypes
 *
 * Return: Akways 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %lu byte(s)\n", (sizeof(c)));
	puts("Size of an int: %lu byte(s)", sizeof(i));
	puts("Size of a long int: %lu byte(s)", sizeof(l));
	puts("Size of a long long int: %lu byte(s)", sizeof(ll));
	puts("Size of a float: %lu byte (s)", sizeof(f));

	return (0);
}
