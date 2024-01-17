# Insert In Sorted Linked List

## Description
This project, **Ordered Insertion in a Linked List**, implements a function in C that inserts a number into a simply linked list while maintaining the order of the list. This project is essential for understanding complex data structures and their manipulations. The `insert_node` function effectively adds a new element to the appropriate position, thus ensuring the ascending order of the list elements.

## Resources
<details>
<summary>File linked_lists.c</summary>
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
<summary>File 0-main.c</summary>
<br>

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);

    printf("-----------------\n");

    insert_node(&head, 27);

    print_listint(head);

    free_listint(head);

    return (0);
}
```
</details>

## Prérequis
- `Programming Language`: C
- `Development Environment`: Ubuntu 14.04 LTS
- `Text Editors`: vi, vim, emacs, Visual Studio
- `Compiler`: gcc 4.8.4
- `Compilation Flags`: -Wall -Werror -Wextra -pedantic
- `Coding Style`: [Betty Style](https://github.com/hs-hq/Betty/tree/main)

## Utilisation
1. Clone the GitHub repository:

```bash
git clone https://github.com/MathieuMorel62/holbertonschool-interview.git
```

2. Navigate to the project folder:

```bash
cd insert_in_sorted_linked_list
```

3. Compile the source files with GCC:

```c
gcc -Wall -Werror -Wextra -pedantic 0-main.c linked_lists.c 0-insert_number.c -o insert
```

4. Execute the code:

```bash
./insert
```

## Key Features
1. **Ordered Insertion**: Efficiently inserts a new element while preserving the order of the list.
2. **Memory Management**: Proper release of allocated memory to avoid memory leaks.

## Task List to Complete
0. [**Insert in sorted linked list**](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/insert_in_sorted_linked_list/0-insert_number.c):  Implementation of the insert_node function..<br>

<details>
<summary>Result</summary>
<br>

<img width="300" alt="Capture d’écran 2024-01-17 à 19 58 42" src="https://github.com/MathieuMorel62/holbertonschool-interview/assets/113856302/b97827f2-06ea-456f-a302-7bf614f2412c">

</details>

## Contact
- **LinkedIn Profile**: [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel-9ab457261/)
- **GitHub Project Link**: [Insert in sorted linked list Project](https://github.com/MathieuMorel62/holbertonschool-interview/tree/main/insert_in_sorted_linked_list)
