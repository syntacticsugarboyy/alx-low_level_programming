#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the file
 * @text_content: pointer to the string to write to the file
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file, wrt, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(file, text_content, len);

	if (file == -1 || wrt == -1)
	{
		return (-1);
	}

	close(file);

	return (-1);
}
