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
    int len = 0, i = 0;


    if (*head == NULL)
        return (1);

    current = *head;
    while (current != NULL)
    {
        current = current->next;
        len++;
    }

	int arr[len];
	
	current = *head;
	while (current != NULL)
	{
		arr[i] = current->n;
		current = current->next;
		i++;
	}

	for (i = 0; i < len / 2; i++)
	{
		if (arr[i] != arr[len - i - 1])
			return (0);
	}

	return (1);
}
