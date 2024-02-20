# <p align="center">Linked List Cycle</p>

![linked list](https://github.com/MathieuMorel62/holbertonschool-interview/assets/113856302/41b816dc-4c1c-4395-900a-d6ebe0270a62)

## 📝 Description
The "Linked List Cycle" project is an algorithmic implementation for detecting a cycle in a linked list. This implementation is crucial for avoiding memory leaks and optimizing performance in linked list manipulation. The project uses advanced algorithms to efficiently identify cycles and ensure the reliability of data structures.

## 📚 Ressources
- [Linked Lists Documentation](https://en.wikipedia.org/wiki/Linked_list)
- [GCC 4.8.4](https://gcc.gnu.org/gcc-4.8/)
- [Tutorial on Linked List Algorithms](https://www.geeksforgeeks.org/linked-list-set-1-introduction/)

## 📂 Files Test:
<details>
<summary>Main.c</summary>
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
    listint_t *current;
    listint_t *temp;
    int i;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);

    if (check_cycle(head) == 0)
        printf("Linked list has no cycle\n");
    else if (check_cycle(head) == 1)
        printf("Linked list has a cycle\n");

    current = head;
    for (i = 0; i < 4; i++)
        current = current->next;
    temp = current->next;
    current->next = head;

    if (check_cycle(head) == 0)
        printf("Linked list has no cycle\n");
    else if (check_cycle(head) == 1)
        printf("Linked list has a cycle\n");

    current = head;
    for (i = 0; i < 4; i++)
        current = current->next;
    current->next = temp;

    free_listint(head);

    return (0);
}
```

</details>
<details>
<summary>Linked_lists.c</summary>
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
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer of the start of the list
 * @n: integer to be included in node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = *head;
    *head = new;

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

## 🛠️ Technologies and Tools Used
- **Langage C**: Used for its efficiency in memory management and low-level control.
- **GCC 4.8.4**: Compiler used to ensure compatibility with C standards.
- **Ubuntu 14.04 LTS**: Reference operating system for compilation and testing.
- **Betty Coding Style**: To maintain a clean and readable code.
- **Valgrind**: An essential tool for detecting memory leaks and programming errors.

## 📋 Prérequis
- `GCC Compiler`: Version 4.8.4 ou higher.
- `Linux Environment`: Ubuntu 14.04 LTS recommended.
- `Text editor`: vi, vim, emacs

## 🚀 Installation and Configuration
1. Clone the repository:

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview/
```

2. Access the project folder:

```sh
cd linked_list_cycle
```

3. Compile with GCC using flags:

```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o cycle_detector
```

4. Run the program:

```sh
./cycle_detector
```

## 💡 Usage
- Run the program with a set of linked list data to check for the presence of cycles.
- Use Valgrind to verify the absence of memory leaks.

## ✨ Key Features
1. **Cycle Detection** : Algorithm to identify cycles in a linked list.
2. **Performance Optimization** : Reduces computational complexity and improves memory management.

## 📝 Task List
0. [**Linked list cycle**](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/linked_list_cycle/0-check_cycle.c): Efficiently identifies the presence of cycles in a linked list.

## 📬 Contact
- **LinkedIn Profile**: [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel-9ab457261/)
