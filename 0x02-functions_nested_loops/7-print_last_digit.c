#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @d: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int d)
{
	int k;

	k = d % 10;

	if (d < 0)
	{
		k = -k;
	}
	_putchar(k + '0');
	return (k);
}
