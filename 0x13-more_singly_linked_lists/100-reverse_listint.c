#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *after;
	
	while (*head != NULL)
	{
	after = (*head)->after;
	(*head)->after = before;
	before = *head;
	*head = after;
	}
	*head = before;
	return (*head);
}

