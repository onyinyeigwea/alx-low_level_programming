#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head in the list
 * @idx: index of the list where the new node is added
 * @n: data to insert in the new node
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int z;
	listint_t *touch;
	listint_t *tmp = *head;

	touch = malloc(sizeof(listint_t));
	if (!touch || !head)
		return (NULL);

	touch->n = n;
	touch->next = NULL;

	if (idx == 0)
	{
		touch->next = *head;
		*head = touch;
		return (touch);
	}

	for (z = 0; tmp && z < idx; z++)
	{
		if (z == idx - 1)
		{
			touch->next = tmp->next;
			tmp->next = touch;
			return (touch);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
