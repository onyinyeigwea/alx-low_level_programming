#include <stdio.h>
#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to -1
 * @n: the number of which value to return
 * @index: the index of the bit to return
 *
 * Return: Returns 1 or -1 in case of an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8 - 1))
		return (-1);

	*n |= (1UL << index);
	return (1);
}
