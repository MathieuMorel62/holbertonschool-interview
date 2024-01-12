#include "lists.h"

/*
 * Write a function in C that inserts a number into a sorted singly linked list.
 * Prototype: listint_t *insert_node(listint_t **head, int number);
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_node(listint_t **head, int number)
{
    if (head == NULL)
        return (NULL);

    listint_t *current = *head;
    listint_t *new_node = malloc(sizeof(listint_t));

    if (new_node == NULL)
        return (NULL);

    new_node->n = number;

    if (current == NULL || number < current->n) {
        new_node->next = current;
        *head = new_node;
        return (new_node);
    }

    while (current->next != NULL && current->next->n < number) {
        current = current->next;
    }

    new_node->next = current->next;
    current->next = new_node;

    return (new_node);
}
