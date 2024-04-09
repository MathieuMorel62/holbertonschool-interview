# <p align="center">Sorted Array To AVL</p>

![array to avl](https://github.com/MathieuMorel62/holbertonschool-interview/assets/113856302/23c589c1-b52f-490d-82ae-2ca3f0f0df9d)

## 📝 Description

This project aims to build an AVL tree (Adelson-Velsky and Landis Tree) from a sorted table. The goal is to effectively convert an array into a balanced binary tree structure, thus optimizing search, insertion and deletion operations.

## 📚 Resources

- [Betty Style Documentation](https://github.com/hs-hq/Betty)
- [AVL Tree Introduction](https://en.wikipedia.org/wiki/AVL_tree)
- [GCC Compiler](https://perso.univ-lyon1.fr/jean-claude.iehl/Public/educ/gcc.html)
- [Understanding Binary Trees](https://www.geeksforgeeks.org/binary-tree-data-structure/)
- [Visualization of binary trees](https://github.com/hs-hq/0x1C.c)

## 🛠️ Technologies and Tools Used

- `GCC 4.8.4`: Used for compilation with specific flags to ensure code quality.
- `C Standard Library`: For the basic features of the program.
- `Betty Coding Style`: To ensure a clear and well-documented code.

## 📋 Prerequisites

- GCC (version 4.8.4 or newer)
- Betty linter for the coding style
- Ubuntu 14.04 LTS or later

## 📊 Data Files

<details>
<summary>Basic Binary Tree</summary>
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
<summary>Main Test</summary>
<br>

```c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Size of the array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    for (i = 0; i < size; ++i)
        printf("(%03d)", array[i]);
    printf("\n");
}

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    avl_t *tree;
    int array[] = {
        1, 2, 20, 21, 22, 32, 34, 47, 62, 68,
        79, 84, 87, 91, 95, 98
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = sorted_array_to_avl(array, n);
    if (!tree)
        return (1);
    print_array(array, n);
    binary_tree_print(tree);
    return (0);
}
```

</details>

## 🚀 Installation and Configuration

1. Clone the GitHub directory:

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview/
```

2. Navigate to the project file:
  
```sh
cd sorted_array_to_avl
```

3. Compile the source files with GCC:

```sh
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-sorted_array_to_avl.c -o 0-sorted_array_to_avl
```

4. Run the compiled program:

```sh
./0-sorted_array_to_avl
```

## 💡 Use

Use the `main.c` example files to test the different features of the program. The results can be viewed using the printing function provided.

## ✨ Main Features

- **Array to AVL conversion**: Effective conversion of a sorted array into a balanced AVL tree.
- **Compliance with coding standards**: Use of the Betty style to ensure the readability and maintenance of the code.

## ## 📝 List of Tasks

| Number | Task | Description |
| ------ | ----------------------- | ------------------------------------------------------------------------------------- |
| 0 | [Sorted Array to AVL](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/sorted_array_to_avl/0-sorted_array_to_avl.c) | Build an AVL tree from a sorted array. |

## 📬 Contact
- Profil LinkedIn : [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel-9ab457261/)
