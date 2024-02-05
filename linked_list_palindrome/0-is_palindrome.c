#include "lists.h"


/**
 * is_palindrome - Checks if a linked list is a palindrome.
 * A palindrome is a sequence that reads the same forwards and backwards.
 *
 * @head: A pointer to a pointer to the first node of the linked list.
 *
 * Return: 1 if the list is a palindrome, 0 if it's not.
 */
int is_palindrome(listint_t **head) {
    if (*head == NULL || (*head)->next == NULL)
        return 1;

    listint_t *slow = *head, *fast = *head, *prev, *temp;
    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }

    prev = NULL;
    while (slow) {
        temp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = temp;
    }

    listint_t *left = *head, *right = prev;
    while (right) {
        if (left->n != right->n)
            return 0;
        left = left->next;
        right = right->next;
    }
    return 1;
}
