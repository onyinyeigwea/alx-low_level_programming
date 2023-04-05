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
	int add = 0;
	listint_t *tmp = head
	
	while (tmp)
	{
		add += tmp->n;
		tmp = tmp->next;
	}
	return (add)
}
