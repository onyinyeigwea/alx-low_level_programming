#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *next;
	unsigned int z;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = tmp->next;
	free(tmp);
	return (1);
	}

	for (z = 0; tmp != NULL && z < index - 1; z++)
	tmp = tmp->next;

    if (tmp == NULL || tmp->next == NULL)
        return (-1);

    next = tmp->next->next;
    free(tmp->next);
    tmp->next = next;

    return (1);
}

