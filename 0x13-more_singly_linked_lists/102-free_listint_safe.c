#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to a pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *tmp;
    listint_t *slow, *fast;

    if (h == NULL || *h == NULL)
        return (count);

    slow = *h;
    fast = *h;

    while (fast && fast->next)
    {
        count++;
        tmp = slow;
        slow = slow->next;
        fast = fast->next->next;
        free(tmp);

        if (slow == fast)
        {
            free(slow);
            *h = NULL;
            return (count + 1);
        }
    }

    while (slow)
    {
        count++;
        tmp = slow;
        slow = slow->next;
        free(tmp);
    }

    *h = NULL;

    return (count);
}
