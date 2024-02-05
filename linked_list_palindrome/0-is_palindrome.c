#include "lists.h"

/**
 * is_palindrome - Checks if a linked list is a palindrome.
 * A palindrome is a sequence that reads the same forwards and backwards.
 *
 * @head: A pointer to a pointer to the first node of the linked list.
 *
 * Return: 1 if the list is a palindrome, 0 if it's not.
 */
int is_palindrome(listint_t **head)
{
	listint_t *current = *head;
	int len = 0, index = 0;
	int *arr = malloc(len * sizeof(int));

	if (!*head)
		return (0);

	while (current)
	{
		arr[len] = current->n;
		current = current->next;
		len++;
	}

	for (index = 0; index < len / 2; index++)
	{
		if (arr[index] != arr[len - index - 1])
			return (1);
	}
	return (0);
}
