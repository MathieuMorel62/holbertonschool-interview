# <p align="center">🌟 Merge Sort 🌟</p>

![merge](https://github.com/MathieuMorel62/holbertonschool-interview/assets/113856302/722daaf6-5d17-4fd9-970e-eec03c786f2e)

## 📝 Description

The **Merge Sort** project aims to implement the fusion sorting algorithm, an effective sorting method that uses the divide paradigm to reign. This algorithm is particularly appreciated for its stable-time complexity of \(O(n \log n)\), which makes it powerful even for large data collections.

The main objective of this project is to create a function that sorts an array of integers in ascending order using the merge sorting algorithm. The project imposes certain constraints and specifications, such as the use of certain text editors and compilers, as well as the application of the Betty-style standard for code.

## 📚 Resources

- [Merge Sort Algorithm](https://intranet.hbtn.io/rltoken/ySi_kjCNSAeBKdsCl8SgZw)

## 🛠️ Technologies and Tools Used

- **GCC**: Used to compile C code with specific options such as `-Wall`, `-Werror`, `-Wextra`, and `-pedantic` to ensure the quality and rigor of the code.
- **Ubuntu 14.04 LTS**: System environment used for file compilation.
- **Betty**: Code style standard used to verify code compliance. The scripts `betty-style.pl` and `betty-doc.pl` are used for this verification.
- **C**: Programming language used to develop the project following strict coding standards.

## 📋 Prerequisite

- ![Ubuntu](https://img.shields.io/badge/Ubuntu-14.04%20LTS-orange)
- ![GCC](https://img.shields.io/badge/GCC-4.8.4-blue)
- ![C](https://img.shields.io/badge/C-90-green)

## 📊 Data Files

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
<summary>0-main.c</summary>
<br>

```c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**

main - Entry point

Return: Always 0
*/
int main(void)
{
  int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
  size_t n = sizeof(array) / sizeof(array[0]);

  print_array(array, n);
  printf("\n");
  merge_sort(array, n);
  printf("\n");
  print_array(array, n);
  return (0);
}
```

</details>

## 🚀 Installation and Configuration

1. **Clone the GitHub repository**

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview.git
```

2. **Change directory**

```sh
cd merge_sort
```

3. **Compile the C files**

```sh
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-merge_sort.c print_array.c -o merge
```

4. **Run the executable**

```sh
./merge
```

## 💡 Utilisation

- **Exemple d'utilisation 1** :

```sh
./merge_sort
```

- **Result** :

```sh
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

Merging...
[left]: 19
[right]: 48
[Done]: 19, 48
Merging...
[left]: 71
[right]: 13
[Done]: 13, 71
Merging...
[left]: 99
[right]: 13, 71
[Done]: 13, 71, 99
Merging...
[left]: 19, 48
[right]: 13, 71, 99
[Done]: 13, 19, 48, 71, 99
Merging...
[left]: 52
[right]: 96
[Done]: 52, 96
Merging...
[left]: 86
[right]: 7
[Done]: 7, 86
Merging...
[left]: 73
[right]: 7, 86
[Done]: 7, 73, 86
Merging...
[left]: 52, 96
[right]: 7, 73, 86
[Done]: 7, 52, 73, 86, 96
Merging...
[left]: 13, 19, 48, 71, 99
[right]: 7, 52, 73, 86, 96
[Done]: 7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
```

## ✨ Main Features

1. **Sorting by fusion**:

The program implements the fusion sorting algorithm to sort an array of integers in ascending order. This algorithm divides the array into smaller subarrays, sorts them recursively, then merges them to get the final sorted array.

2. **Detailed display**:

During execution, the program displays the intermediate steps of the fusion process, making it possible to visualize the operation of the algorithm.

3. **Efficient memory management**:

The program uses `malloc` and `free` for memory management efficiently, with a single allocation and memory release during execution.

## 📝 List of Tasks

| Number | Task | Description |
| ------ | ----- | ----------- |
| 0 | [Merge sort](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/merge_sort/0-merge_sort.c) | Write a function that sorts an array of integers in ascending order using the Merge Sort algorithm. Implement the top-down merge sort algorithm. |

## 📬 Contact

- Profil LinkedIn : [Mathieu Morel](https://www.linkedin.com/in/mathieumorel62/)
