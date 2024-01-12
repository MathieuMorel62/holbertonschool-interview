#include "lists.h"
#include <stdlib.h>

/*
 * Write a function in C that inserts a number into a sorted singly linked list.
 * Prototype: listint_t *insert_node(listint_t **head, int number);
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *current;

	current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;

	if (*head == NULL || number < (*head)->n)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (current->next && current->next->n < number)
			current = current->next;

		new->next = current->next;
		current->next = new;
	}

	return (new);
}

