#include <unistd.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number to be printed
 *
 * Return: 0
 */


void print_binary(unsigned long int n)
{
	char z;

	if (n > 1)
		print_binary(n >> 1);
	z = (n & 1) + '0';
	write(1, &z, 1);
}

