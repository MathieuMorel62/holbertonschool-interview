# <p align="center">🌟 Heap Extract 🌟</p>

## 📝 Description

The **Heap Extract** project is an implementation of an algorithm to extract the root of a maximum binary heap (Max Binary Heap). This project focuses on the management and manipulation of advanced C data structures, especially binary trees and binary heaps.

The main objective is to provide a robust function capable of removing the root of the heap, replacing it with the last node in order of level and rearranging the heap if necessary. This project addresses key concepts such as memory management, dynamic data structures, and heap sorting and reconstruction algorithms.

## 📚 Resources
- [Betty Style](https://github.com/hs-hq/Betty/blob/master/betty-style.pl)
- [Max Binary Heap - Wikipedia](https://en.wikipedia.org/wiki/Binary_heap)
- [Binary Tree Data Structure](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
- [Heap Operations - GeeksforGeeks](https://www.geeksforgeeks.org/heap-data-structure/)

## 🛠️ Technologies and Tools Used

- `C`: Main language used to implement data structures and algorithms.
- `GCC`: Compiler used to compile C code with the `-Wall`, `-Werror`, `-Wextra` and `-pedantic options`.
- `Valgrind`: Memory error detection tool, used to check for memory leaks and other errors related to memory management.
- `Betty`: Linter used to ensure that the code complies with Holberton's standards of style and documentation.

## 📋 Prérequis

- ![GCC](https://img.shields.io/badge/gcc-4.8.4-blue)
- ![Ubuntu](https://img.shields.io/badge/Ubuntu-14.04-orange)
- ![Valgrind](https://img.shields.io/badge/valgrind-3.10.1-red)

## 📊 Data Files

> [Static library](https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/466/libheap.a)

<details>
<summary>binary_tree_s Structure</summary>
<br>

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

</details>
<details>
<summary>Max Binary Heap Typedef</summary>
<br>

```c
typedef struct binary_tree_s heap_t;
```
</details>
<details>
<summary>Main Function Example</summary>
<br>

```c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/*
 * The following are helpers functions needed in this main file
 * You don't need them in your `heap_extract function`.
 */
heap_t *_array_to_heap(int *array, size_t size);
void binary_tree_print(const binary_tree_t *tree);
void _binary_tree_delete(binary_tree_t *tree);

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
	heap_t *tree;
	int array[] = {
		79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
		20, 22, 98, 1, 62, 95};
	size_t n = sizeof(array) / sizeof(array[0]);
	int extract;

	tree = _array_to_heap(array, n);
	if (!tree)
		return (1);
	binary_tree_print(tree);

	extract = heap_extract(&tree);
	printf("Extracted: %d\n", extract);
	binary_tree_print(tree);

	extract = heap_extract(&tree);
	printf("Extracted: %d\n", extract);
	binary_tree_print(tree);

	extract = heap_extract(&tree);
	printf("Extracted: %d\n", extract);
	binary_tree_print(tree);
	_binary_tree_delete(tree);
	return (0);
}
```

</details>

## 🚀 Installation and Configuration

1. Step 1: Clone the GitHub repository

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview.git
```

2. Step 2: Navigate to the project directory

```sh
cd heap_extract
```

3. Step 3: Compile the C files

```sh
gcc -Wall -Wextra -Werror -pedantic -o 0-heap_extract 0-main.c 0-heap_extract.c binary_tree_print.c -L. -lheap
```

4. Step 4: Run the program with Valgrind to detect memory errors

```sh
valgrind ./0-heap_extract
```

## ✨ Main Features

1. **Extraction of the root of the pile**: The `heap_extract` function allows you to extract the root value of a maximum binary heap while maintaining the structure of the heap.

2. **Reconstruction of the pile**: After extraction, the pile is automatically rebuilt to maintain its properties.

3. **Memory management**: The project ensures effective memory management, avoiding leaks and ensuring the appropriate release of resources.

4. **Compatibility and standardization**: The code follows Betty style standards to ensure optimal readability and maintainability.

5. **Integrated test support**: A main test file (`main.c`) is provided to validate the proper functioning of the implemented functions.

## 📝 List of Tasks

| Number | Task | Description |
| ------ | ----------------------- | ------------------------------------------------------------------------------- |
| 0 | **[Heap - Extract](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/heap_extract/0-heap_extract.c)** | Write a function that extracts the root node of a Max Binary Heap. |

## 📬 Contact
- LinkedIn Profile: [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel62/)
