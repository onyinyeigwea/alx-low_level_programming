#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that returns the number of bits to flip
 * @n: this is the first no
 * @m:The second no
 *
 * Return: the number of bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d = n ^ m;
	unsigned int count = 0;

	while (d > 0)
	{
		count += (d & 1);
		d >>= 1;
	}
	return (count);
}
