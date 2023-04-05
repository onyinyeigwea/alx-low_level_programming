#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: pointer to the first element of a list
 *
 * Return: The number of nodes*
 */

size_t print_listint(const listint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; h = h->next, num++)

	{
		printf("%d\n", h->n);

		}
	return (num);
}
