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
	listint_t *current;
	int len = 0, j;
	int *arr;

	if (*head == NULL)
		return (1);

	current = *head;
	arr = malloc(sizeof(int) * len);
	while (current != NULL)
	{
		arr[len] = current->n;
		current = current->next;
		len++;
	}

	for (j = 0; j < len / 2; j++)
	{
		if (arr[j] != arr[len - j - 1])
			return (0);
	}
	return (1);
}
