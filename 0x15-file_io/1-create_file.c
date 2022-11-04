#include "main.h"

/**
 * create_file - function creates a file
 * @filename: Name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd;
	int i;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = '\0';

	for (i = 0; text_content[i]; i++)
		;

	rwr = write(fd, text_content, i);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}

