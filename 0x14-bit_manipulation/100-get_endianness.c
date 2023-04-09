#include <stdio.h>
#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 if big and 1 if little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}

