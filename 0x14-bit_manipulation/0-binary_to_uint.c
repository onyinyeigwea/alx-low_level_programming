#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number.
 * Otherwise 0 if there is one or more char inthe string b.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;
	int i = 0;

	if (b == NULL)
	return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		ans <<= 1;
		ans += b[i] - '0';
			i++;
	}

	return (ans);
}
