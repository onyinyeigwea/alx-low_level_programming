#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: string to add to end of of first string
 *
 * Return: pointer to newly allocated string concatenation
 *
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	char *result = malloc(len1 + len2 + 1);
	if (result == NULL)

		return (NULL);

	strcpy(result, s1);
	strcpy(result + len1, s2);

	return (result);

}

