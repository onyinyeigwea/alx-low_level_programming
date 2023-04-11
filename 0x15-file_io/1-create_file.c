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
	FILE *fd;
	ssize_t len = 0;


	if (!filename)
		return (-1);
	fd = fopen(filename, "w");
		if (fd == -1)
		return (-1);

	if (text_content)
		len = fwrite(text_content, sizeof(char), strlen(text_content), fd);

	fclose(fd);
	chmod(filename, S_IRUSR | S_IWUSR);

	return (len == 0 ? -1 : 1);
}
