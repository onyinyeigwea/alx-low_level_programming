#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: -1 if NULL and 1 on success
 */

	int create_file(const char *filename, char *text_content)
{
	int num, store_fd;


	if (!filename)
		return (-1);

	if (text_content == NULL)

	if (store_fd == -1)
		return (-1);

	if (text_content)
		numBytes = write(store_fd, text_content, strlen(text_content));

	close(store_fd);

	return (numBytes == -1 ? -1 : 1);
}
