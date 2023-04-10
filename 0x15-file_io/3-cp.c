#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command line argument
 * @argv: The command line argument
 *
 * Return: 0 if its a success otherwise error code
 */

int main(int argc, char *argv[])
{
	int from_a, to_b;
	ssize_t read_bytes,
		written_byte;
	char buffer[BUFFER_SIZE};
mode_t mode = S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
	from_a = open(argv[1], o_RDONLY);

	if (from_a == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(from_a);
	exit(99);
}
	while ((read_bytes = read(from_a, buffer, BUFFER_SIZE)) > 0)
{
	written_bytes = 
		write(to_b, buffer, read_bytes);
	if (written_bytes != read_bytes)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(from a);
		close(to_b);
		exit(99);
	}
}
	if(read_bytes == -1)
{
	dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
	close(from_a);
	close(to_b);
	exit(98)
}

if (close(from_a) == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close a %d\n",                                                                                                                                                                                           

