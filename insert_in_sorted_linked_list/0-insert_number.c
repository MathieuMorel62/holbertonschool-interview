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
	listint_t *current = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = number;
	new->next = NULL;

	if (!*head || (*head)->n > new->n)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		current = *head;
		for (; current->next; current = current->next)
		{
			if (current->next->n >= new->n)
				break;
		}
		new->next = current->next;
		current->next = new;
	}
	return (current);
}
