#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of file to append
 * @text_content: null terminated string to add at the end of the file
 *
 * Return: -1 if NULL and 1 if filename exists
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *p;

	if (filename == NULL)
		return (-1);
	p = fopen(filename, "a");
	if (p == NULL)
		return (-1);
	if (text_content != NULL)
		fputs(text_content, p);
	fclose(p);
	return (1);
}
