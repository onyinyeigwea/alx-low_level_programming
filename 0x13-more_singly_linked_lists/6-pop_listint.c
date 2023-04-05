#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - a function tht deletes the head node
 * @head: a pointer to the list
 *
 * Return: returns the head nodes data if successful
 */

int pop_listint(listint_t **head)
{
	int n;
	pop_listint *new;

	if (head == NULL)
		return (0);

	new = *head;
	n = new->n;
	*head = new->next;
	free(new);
		return (n);
}

