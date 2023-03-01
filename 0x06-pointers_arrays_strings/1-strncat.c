#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings. it will use at
 *            most n bytes from src
 *
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes fro src
 *
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
	int couch, count;

	for (couch = 0; dest[couch] != '\0'; couch++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[couch] = src[count];
		couch++;
	}
	if (count < n)
	{
	dest[couch] = '\0';
	}
	return (dest);
}
