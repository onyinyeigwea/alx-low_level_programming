#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char w;

	for (w = 'a' ; w <= 'z' ; w++)
	{
		if ((w == 'q' || w == 'e') != 1)
		{
			putchar(w);
		}

	}
	putchar('\n');
	return (0);
}

