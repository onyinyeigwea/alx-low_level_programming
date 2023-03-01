#include "main.h"
/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @hi: This is the input string
 *
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *hi)
{
	int couch = 0;
	int desp = 'a' - 'A';

	for (couch = 0; hi[couch] != '\0'; ++couch)
	{
		if (hi[couch] >= 'a' && hi[couch] <= 'z')
		{
			hi[couch] = hi[couch] - desp;
		}
	}
	return (hi);
}
