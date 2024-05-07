# <p align='center'>🌟 Heap Sort 🌟</p>

## 📝 Description

Heap Sort is an effective sorting algorithm based on a data structure called heap. It is used to sort lists or tables in ascending or descending order. The algorithm is based on building a heap from the list to be sorted, followed by a series of deletions of the root node to obtain a sorted list.

This algorithm is particularly useful for real-time applications and embedded systems because of its stable temporal complexity of O(n log n) and its efficiency in memory.

## 📚 Resources

Here is a list of resources that will help you understand and implement heap sorting:

1. [GCC Documentation](https://gcc.gnu.org/)
2. [Betty Style](https://github.com/holbertonschool/Betty)
3. [Heap Sort Algorithm](https://www.geeksforgeeks.org/heap-sort/)
4. [Understanding Big O Notation](https://www.freecodecamp.org/news/learn-big-o-notation/)

## 🛠️ Technologies and Tools Used

1. **C Language**: Used for the implementation of the algorithm. It is an efficient low-level programming language, perfect for memory manipulation.
2. **GCC Compiler**: Used to compile C code. GCC is a versatile and powerful compiler.
3. **Betty Style**: Used to ensure a consistent and professional code style. The Betty Style guides C developers to write a clean and well-documented code.
4. **Ubuntu 14.04 LTS**: Execution environment used for the project. This version of Ubuntu is stable and widely used for C development.

## 📋 Prerequisite

- ![C](https://img.shields.io/badge/C-90-blue)
- ![GCC](https://img.shields.io/badge/gcc-4.8.4-green)
- ![Ubuntu](https://img.shields.io/badge/Ubuntu-14.04-orange)
- ![Betty](https://img.shields.io/badge/Betty%20Style-1.0-orange)

## 📊 Data files


<details>
<summary>print_array.c</summary>
<br>

```c
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```

</details>
<details>
<summary>main.c</summary>
<br>

```c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    heap_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
```

</details>
<details>
<summary>sort.h</summary>
<br>

```c
#ifndef SORT_H
#define SORT_H

#include <stddef.h>

void heap_sort(int *array, size_t size);
void print_array(const int *array, size_t size);

#endif /* SORT_H */
```

</details>

## 🚀 Installation and Configuration

1. **Step 1**: Make sure you have installed GCC on your machine. You can do this by executing the following command:

```sh
sudo apt-get install gcc
```

2. **Step 2**: Clone the project from the GitHub repository:

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview.git
```

3. **Step 3**: Access the project directory:

```sh
cd heap_sort
```

4. **Step 4**: Compile the project using GCC:

```sh
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-heap_sort.c print_array.c -o heap_sort
```

5. **Step 5**: Run the program:

```sh
./heap_sort
```

## ✨ Main Features

1. **Sort in ascending order**: The project implements a heap sorting algorithm to sort an array of integers in ascending order. This algorithm uses a data structure called heap to organize the elements hierarchically.

2. **Real-time sorting**: The algorithm is designed to sort elements in real time, making it ideal for embedded applications and systems requiring a quick response.

3. **Stable complexity**: Heap Sort has a temporal complexity of O(n log n) in the worst case, making it an effective sorting algorithm for many use cases.

4. **Printing the table**: The project includes a practical function to print the integer table, thus facilitating the debugging and verification of results.

5. **Personalization**: The sorting algorithm can be easily customized to sort data types or more complex structures by modifying the comparison logic.

## 📝 List of Tasks

| Number | Task | Description |
|--------|-------|---------------|
| 0 | [Heap sort](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/heap_sort/0-heap_sort.c) | Implement a function that sorts an array of integers in ascending order using the Heap sort algorithm. |

## 📬 Contact

- LinkedIn Profile: [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel62/)
