#include "main.h"

/**
 * read_textfile - reads a text a textfile
 * @filename: pointer to file
 * letters - number of characters
 *
 * Description: A function that reads into a file
 *
 * Return: count or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *space;
	ssize_t file;
	ssize_t count;
	ssize_t reed;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	space = malloc(sizeof(char) * letters);
	reed = read(file, space, letters);
	count = write(STDOUT_FILENO, space, reed);

	free(space);
	close(file);

	return (count);
}
