#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the first element of the list
 *
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)

{
	size_t num = 0;

	while (h != 0)
	{
		h = h->next;
		num++;
	}

	return (num);

}

