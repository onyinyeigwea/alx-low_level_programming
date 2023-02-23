#include "main.h"

/**
 *  * print_most_numbers - checks for checks for a digit (0 through 9).
 *   *
 *    * Return: Always 0.
*/
void print_most_numbers(void)
{
	int numb;

	for (numb = 48 ; numb <= 57 ; numb++)
	{
		if (numb != 50 && numb != 52)
		{
			_putchar(numb);
		}
	}
	_putchar('\n');
}
