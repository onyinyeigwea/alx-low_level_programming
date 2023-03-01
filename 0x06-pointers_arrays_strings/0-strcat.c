#include "main.h"

/**
 *_strcat - Writes a function that concatenates two strings.
 *
 *@dest: This is the output dest
 *@src: This is the input source
 *
 * Return: This return to dest, that concatenates two strings
 */

char *_strcat(char *dest, char *src)
{
	int Zara, Onyi;

	for (Zara = 0; dest[Zara] != '\0'; Zara++)
		;
	for (Onyi = 0; src[Onyi] != '\0'; Onyi++)
	{
		dest[Zara] = src[Onyi];
		Zara++;
	}
	return (dest);
}
