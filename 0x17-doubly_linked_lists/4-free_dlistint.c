#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list.
 * @head: A pointer to the head of the list.
 *
 * doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp;

    if (head)
    {
        while (head->prev)
            head = head->prev;
        while (head)
        {
            tmp = head;
            head = head->next;
            free(tmp);
        }
    }
}
