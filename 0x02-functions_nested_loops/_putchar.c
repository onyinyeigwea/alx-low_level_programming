#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On sucess 1.
 * on error, -1 is returned, and is set appropraitely
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
R
