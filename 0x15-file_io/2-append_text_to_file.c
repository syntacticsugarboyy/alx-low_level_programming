#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to append to the file.
 *
 * Return: 1 or -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	fl = open(filename, O_WRONLY | O_APPEND);
	wrt = write(fl, text_content, len);

	if (fl == -1 || wrt == -1)
	{
		return (-1);
	}

	close(fl);

	return (1);
}
