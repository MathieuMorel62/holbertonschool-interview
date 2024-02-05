# Linked List Palindrome

![linked palindrome](https://github.com/MathieuMorel62/holbertonschool-interview/assets/113856302/556bfd70-a7ea-49cd-9e33-ea49169c7fa6)

## Description
The "Linked List Palindrome" project is designed to develop a C application that checks if a linked list is a palindrome. A palindrome is a sequence that reads the same forwards and backwards. The project involves creating a linked list data structure, functions for adding and freeing nodes, and the main function to determine if the list is a palindrome. This project is crucial for understanding complex data structures and algorithms in computer science.

## Resources
- [Linked List Documentation](https://en.wikipedia.org/wiki/Linked_list)
- [C Programming Guide](https://www.learn-c.org/)
- [GitHub - Betty Style](https://github.com/hs-hq/Betty)

## Technologies and Tools Used
- `C Language`: Used for application development due to its performance and closeness to hardware.
- `GitHub`: Versioning platform for code tracking and collaboration.
- `Betty Style`: A coding style for C, ensuring code readability and maintainability.

## Prerequisites
- `GCC version 4.8.4`: Compiler for the C language.
- `Ubuntu 14.04 LTS`: Recommended operating system for compiling and running the project.

## Installation and Configuration
1. Clone the GitHub repository: 

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview.git
```

2. Move to the appropriate directory:

```sh
cd linked_list_palindrome
```

3. Compile the project with GCC: gcc -Wall -Werror -Wextra -pedantic *.c -o palindrome

```sh
cd gcc -Wall -Werror -Wextra -pedantic *.c -o palindrome
```

4. Run the executable:

```sh
./palindrome
```

## Files For Test

<details>
<summary>lists.h</summary>
<br>

```c
#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

int is_palindrome(listint_t **head);

#endif /* LISTS_H */
```

</details>
<details>
<summary>linked_lists.c </summary>
<br>

```c
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
    const listint_t *current;
    unsigned int n; /* number of nodes */

    current = h;
    n = 0;
    while (current != NULL)
    {
        printf("%i\n", current->n);
        current = current->next;
        n++;
    }

    return (n);
}

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @n: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *current;

    current = *head;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (*head == NULL)
        *head = new;
    else
    {
        while (current->next != NULL)
            current = current->next;
        current->next = new;
    }

    return (new);
}

/**
 * free_listint - frees a listint_t list
 * @head: pointer to list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
}
```

</details>
<details>
<summary>0-main.c</summary>
<br>

```c
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 17);
    add_nodeint_end(&head, 972);
    add_nodeint_end(&head, 50);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 50);
    add_nodeint_end(&head, 972);
    add_nodeint_end(&head, 17);
    add_nodeint_end(&head, 1);
    print_listint(head);

    if (is_palindrome(&head) == 1)
        printf("Linked list is a palindrome\n");
    else
        printf("Linked list is not a palindrome\n");

    free_listint(head);

    return (0);
}
```

</details>

## Usage
- Run the program with a predefined linked list to check if it is a palindrome.
- Modify values in the list to test different scenarios.

## Main Features
1. **Linked List Creation**: Builds the necessary data structure.
2. **Palindrome Verification**: Central algorithm to determine if the list is a palindrome.

## Task List
0. [**Linked List Palindrome**](https://github.com/MathieuMorel62/holbertonschool-interview/tree/main/linked_list_palindrome): Develop a function to check if a linked list is a palindrome.

## Contact

- **LinkedIn Profile**: [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel-9ab457261/)
