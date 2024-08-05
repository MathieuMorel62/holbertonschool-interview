# <p align="center">🌟 AVL Trees 🌟</p>

![avl](https://github.com/user-attachments/assets/17655b30-e53f-4b5a-9277-4e09d72e98d4)

## 📝 Description

The **AVL Trees project** is an advanced initiative to develop algorithms for verifying and manipulating AVL trees (Adelson-Velsky and Landis Tree), a self-balanced data structure that ensures search, insertion and deletion operations in logarithmic time. This project is crucial to improve the understanding of advanced data structures and their application in high-performance contexts.

AVL trees, being a form of Binary Search Tree (BST), maintain a strict balance where the difference in height between the left and right subtrees of each node never exceeds one. This project focuses on the implementation and verification of this property, thus ensuring that operations on the tree remain effective even in the event of repeated insertion or removal.

## 📚 Resources

- [AVL Trees on Wikipedia](https://en.wikipedia.org/wiki/AVL_tree)
- [AVL Trees on GeeksforGeeks](https://www.geeksforgeeks.org/avl-tree-set-1-insertion/)
- [AVL Trees on HackerRank](https://www.hackerrank.com/challenges/self-balancing-tree/problem)

## 🛠️ Technologies and Tools Used

- **C**: Used for the performance and low-level control of data structures.
- **GCC**: Compiler for C, used with strict flags to ensure the quality of the code.
- **Betty**: Used to ensure compliance with the code style.
- **Ubuntu 14.04 LTS**: Program development and execution environment.

## 📋 Prérequis

- ![C](https://img.shields.io/badge/C-89-brightgreen)
- ![GCC](https://img.shields.io/badge/gcc-4.8.4-blue)
- ![Ubuntu](https://img.shields.io/badge/Ubuntu-14.04%20LTS-orange)

## 📊 Data Files

<details>
<summary>binary_tree_s Structure</summary>

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
typedef struct binary_tree_s avl_t;
```
</details>
<details>
<summary>0-main.c</summary>

```c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * basic_tree - Build a basic binary tree
 *
 * Return: A pointer to the created tree
 */
binary_tree_t *basic_tree(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 128);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 10);
    return (root);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int avl;

    root = basic_tree();

    binary_tree_print(root);
    avl = binary_tree_is_avl(root);
    printf("Is %d avl: %d\n", root->n, avl);
    avl = binary_tree_is_avl(root->left);
    printf("Is %d avl: %d\n", root->left->n, avl);

    root->right->left = binary_tree_node(root->right, 97);
    binary_tree_print(root);
    avl = binary_tree_is_avl(root);
    printf("Is %d avl: %d\n", root->n, avl);

    root = basic_tree();
    root->right->right->right = binary_tree_node(root->right->right, 430);
    binary_tree_print(root);
    avl = binary_tree_is_avl(root);
    printf("Is %d avl: %d\n", root->n, avl);

    root->right->right->right->left = binary_tree_node(root->right->right->right, 420);
    binary_tree_print(root);
    avl = binary_tree_is_avl(root);
    printf("Is %d avl: %d\n", root->n, avl);
    return (0);
}
```
</details>

## 🚀 Installation and Configuration

1. Clone the repository:

```bash
git clone https://github.com/MathieuMorel62/holbertonschool-interview.git
```

2. Navigate to the project directory:

```bash
cd avl_trees
```

3. Compile the project:

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_is_avl.c -o 0-is_avl
```

4. Run the project:

```bash
./0-is_avl
```

## 💡 Use

- **Example of use**:

Run the project for verifying if a binary tree is an AVL tree.

```bash
./0-is_avl
```

Result:

```bash
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)
Is 98 avl: 1
Is 12 avl: 1
       .-------(098)-------.
  .--(012)--.         .--(128)--.
(010)     (054)     (097)     (402)
Is 98 avl: 0
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)--.
                              (430)
Is 98 avl: 0
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)-------.
                                .--(430)
                              (420)
Is 98 avl: 0
```

## ✨ Main Features

1. **AVL verification**: Implementation of the `binary_tree_is_avl` function to check if a binary tree is a valid AVL tree.

2. **Subtree balancing**: Ensures that the height difference between the left and right sub-trees never exceeds one.

3. **Use of specific structures**: Definition and use of the `binary_tree_s` structure to represent the nodes of binary trees.

4. **Strict compilations and tests**: Use of GCC with strict flags to ensure code quality and compliance with the Betty style.

## 📝 List of Tasks

| Number | Task | Description |
| ------ | ----------------------- | ------------------------------------------------------------------------------- |
| 0 | [Is AVL mandatory](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/avl_trees/0-binary_tree_is_avl.c) | Write a function that checks if a binary tree is a valid AVL Tree. |

## 📬 Contact
- LinkedIn Profile: [Mathieu Morel](https://www.linkedin.com/in/mathieumorel62/)
