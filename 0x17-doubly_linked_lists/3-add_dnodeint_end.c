#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(*new_node));
    dlistint_t *last_node = *head;

    if (head && new_node)
    {
        new_node->n = n;
        new_node->next = NULL;
        if (!*head)
        {
            new_node->prev = NULL;
            *head = new_node;
            return (new_node);
        }
        while (last_node->next)
            last_node = last_node->next;
        last_node->next = new_node;
        new_node->prev = last_node;
        return (new_node);
    }
    return (NULL);
}
