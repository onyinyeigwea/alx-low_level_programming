#include "main.h"

/**
 * reverse_array - reverses the content of an array of
 * integers.
 *
 * @a: This is the input array
 * @n: This is the positions have the array
 *
 */
void reverse_array(int *a, int n)
{
	int m, last;

	last = n - 1;
	for (m = 0; m < n / 2; m++)
	{
		int start, end;

		start = a[m];
		end = a[last];
		a[m] = end;
		a[last] = start;
		last--;
	}
}
