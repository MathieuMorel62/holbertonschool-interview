#include "lists.h"

/*
 * Write a function in C that inserts a number into a sorted singly linked list.
 * Prototype: listint_t *insert_node(listint_t **head, int number);
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_node(listint_t **head, int number)
{
    listint_t *current = *head;
    listint_t *new_node;
    listint_t *prev = NULL;

    while (current != NULL && current->n < number)
    {
        prev = current;
        current = current->next;
    }

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = number;
    new_node->next = current;

    if (prev == NULL)
    {
        *head = new_node;
    }
    else
    {
        prev->next = new_node;
    }

    return (new_node);
}
