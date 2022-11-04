#include "main.h"

/**
 * read_textfile - function reads a text file and
 * prints it to the stdout POSIX
 * @filename: file to read the text
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	size_t w = 0, r;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	r = read(fd, buff, letters);
	buff[r] = '\0';

	w = write(STDOUT_FILENO, buff, r);
	free(buff);
	if (w == r)
	{
		close(fd);
		return (w);
	}
	else
		return (0);
}
