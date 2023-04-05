#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	while (head != NULL)
	{sum += head->n;
		head = head->next;
	}
	return (sum)
}
