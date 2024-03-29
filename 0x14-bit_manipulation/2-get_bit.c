#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given task
 * @n: the number of whose bit value to return
 * @index: the index of the bit to return
 *
 * Return: the value of the bit at index or -1 if n error occure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
			return ((n >> index) & 1);
}
