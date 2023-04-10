#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * @filename:name of the file to read
 * @letters: letters to be read
 *
 * Return: 0 if filename is null
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	n_read = read(fd, buff, letters);
	if (n_read == -1)
	{	free(buff);
		close(fd);
		return (0);
	}
	n_written = write(STDOUT_FILENO, buff, n_read);
	if (n_written == -1 || n_written != n_read)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);

	return (n_written);
}
