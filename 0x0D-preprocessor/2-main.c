#include <stdio.h>

/**
 *main - prints the name of the file it was compiled from
 *
 *Return: Everything worked ok
 */
int main(void)
{
	printf("Name of source file:%s\n", _FILE_);
	return (0);
}
