#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_i linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: return pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z = 0;

	listint_t *temp;
	*temp = head;
	for (z = 0; z < index && head != NULL; z++)
		temp = temp->next;
	return (head);
}

