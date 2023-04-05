#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end  - adds a new node at the beginning of a listint_t list
 * @head: double pointer  to the first element of the list
 * @n: integer value to be stored in the new node
 *
 * Return: the address of the new elemebt or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
        listint_t *newNode;

        newNode = malloc(sizeof(listint_t));
        if (newNode == NULL)
        return (NULL);

        newNode->n = n;
        newNode->next = *head;
        *head = newNode;
        return (newNode);
}
