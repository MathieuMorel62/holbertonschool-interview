# <p align="center">Linear Search In Skip List</p>

![skip list](https://github.com/MathieuMorel62/holbertonschool-interview/assets/113856302/e936c1f7-85d8-4026-a606-e9492854f370)

## 📝 Description

This project, `Linear Search in a Skip List`, implements a search for values in a chained list optimized by a fast track called "skip list". A skip list is a data structure that allows faster searches than a traditional chained list using "express lanes". This project was designed to improve the temporal complexity of linear searches in chained lists by adding this optimization layer.

## 📚 Resources

- [Skip List Documentation](https://example.com/skip_list_docs)
- [Chained List Theory](https://example.com/linked_list_theory)
- [GitHub Markdown Syntax](https://guides.github.com/features/mastering-markdown/)
- [Introduction to Data Structures](https://example.com/data_structures)
- [Betty Coding Style](https://github.com/hs-hq/Betty/blob/master/betty-style.pl)

## 🛠️ Technologies and Tools Used

- **C**: Programming language used for the implementation of skip list functions.
- **GCC 4.8.4**: Compiler for compiling C scripts with strict options to guarantee the quality of the code.
- **Betty Style**: Coding style to ensure the consistency and readability of the source code.

## 📋 Prerequisite

- **Operating system**: Ubuntu 14.04 LTS
- **Compiler**: GCC version 4.8.4
- **Compiling flags**: `-Wall -Werror -Wextra -pedantic`

## 📊 Data Files

<details>
<summary>search.h</summary>

```c++
#ifndef _SEARCH_H_
#define _SEARCH_H_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct skiplist_s {
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

skiplist_t *create_skiplist(int *array, size_t size);
void print_skiplist(const skiplist_t *list);
void free_skiplist(skiplist_t *list);
skiplist_t *linear_skip(skiplist_t *head, int value);

#endif /* _SEARCH_H_ */
```

</details>
<details>
<summary>main.c</summary>
<br>

```c++
#include <stdio.h>
#include <stdlib.h>
#include "search.h"

int main(void) {
    skiplist_t *list, *res;
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    list = create_skiplist(array, size);
    print_skiplist(list);

    res = linear_skip(list, 53);
    printf("Found %d at index: %lu\n\n", 53, res->index);
    res = linear_skip(list, 2);
    printf("Found %d at index: %lu\n\n", 2, res->index);
    res = linear_skip(list, 999);
    printf("Found %d at index: %p\n", 999, (void *) res);

    free_skiplist(list);
    return (EXIT_SUCCESS);
}
```

</details>

<details>
<summary>create_skiplist.c</summary>
<br>

```c++
#include <stdlib.h>
#include <math.h>
#include "search.h"

/**
 * init_express - Initializes the express lane of the linked list
 *
 * @list: Pointer to the head node of the list
 * @size: Number of nodes in the list
 */
void init_express(skiplist_t *list, size_t size)
{
	const size_t step = sqrt(size);
	size_t i;
	skiplist_t *save;

	for (save = list, i = 0; i < size; ++i, list = list->next)
	{
		if (i % step == 0)
		{
			save->express = list;
			save = list;
		}
	}
}

/**
 * create_skiplist - Create a single linked list
 *
 * @array: Pointer to the array used to fill the list
 * @size: Size of the array
 *
 * Return: A pointer to the head of the created list (NULL on failure)
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
	skiplist_t *list;
	skiplist_t *node;
	size_t save_size;

	list = NULL;
	save_size = size;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_skiplist(list);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->express = NULL;
		node->next = list;
		list = node;
	}
	init_express(list, save_size);
	return (list);
}
```

</details>
<details>
<summary>free_skiplist.c</summary>
<br>

```c++
#include <stdlib.h>
#include "search.h"

/**
 * free_skiplist - Deallocates a singly linked list
 *
 * @list: Pointer to the linked list to be freed
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist(node);
	}
}
```

</details>
<details>
<summary>print_skiplist.c</summary>
<br>

```c++
#include <stdio.h>
#include <stdlib.h>
#include "search.h"

/**
 * print_skiplist - dump the content of a skiplist_t
 *
 * @list: Pointer to the head of the list
 *
 * Return: void
 */
void print_skiplist(const skiplist_t *list)
{
	const skiplist_t *node;

	printf("List :\n");
	for (node = list; node; node = node->next)
	{
		printf("Index[%lu] = [%d]\n", node->index, node->n);
	}
	printf("\nExpress lane :\n");
	for (node = list; node; node = node->express)
	{
		printf("Index[%lu] = [%d]\n", node->index, node->n);
	}
	printf("\n");
}
```

</details>

## Installation and Configuration

1. **Cloning the repository**: 

```bash
git clone https://github.com/MathieuMorel62/holbertonschool-interview/
```

2. **Access the directory**:

```bash
cd linear_skip
```

3. **Compilation**: Use the command 

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -lm -o linear_skip 
```

4. **Execution**: Run the program compiled with 

```bash
./linear_skip
```

## ✨ Main Features

1. **Create Skip List**: Function to create a skip list from an array of integers, allowing quick searches.
2. **Skip List display**: Displays the values and indices of the skip list items.
3. **Skip List release**: Frees up the memory allocated for the skip list.
4. **Linear Search with Skip**: Function that uses an expressway to speed up the search for values, demonstrating a significant improvement over traditional linear search.

## 📝 List of Tasks

| Number | Task | Description |
| ------ | ---------------------------------------- | ---------------------------------------------------------------------------- |
| 0 | [**Linear Search in a Skip List**](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/linear_skip/0-linear_skip.c) | Implement a function that searches for a specific value in a skip list. |

## 📬 Contact

- **LinkedIn Profile**: [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel-9ab457261/)
