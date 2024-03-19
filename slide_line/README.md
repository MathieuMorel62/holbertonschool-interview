# <p align="center">2048 (single line)</p>

## 📝 Description

2048 (single line) is a variant of the famous **2048 game**, adapted from a single line perspective. The project involves manipulating a series of numbers in a line, dragging and merging them, thus simulating the game mechanics of the original 2048. This implementation is distinguished by its simplicity and concentration on most of the gameplay.

## 📚 Resources

- [Official document 2048](https://gabrielecirulli.github.io/2048/)
- [Guide Betty Coding Style](https://github.com/holbertonschool/Betty)
- [Tutoriel C Programming](https://www.learn-c.org/)
- [Documentation GCC](https://gcc.gnu.org/)

## 🛠️ Technologies and Tools Used

- **C**: Programming language chosen for its speed and proximity to the system.
- **GCC**: Compiler used for its extended compatibility and debugging options.
- **GitHub**: Versioning platform for code control and collaborative work.

## 📋 Prerequisite

- **Operating system**: Linux (Tested on Ubuntu 14.04 LTS)
- **Compilator**: GCC 4.8.4
- **Code style**: Betty

## 🚀 Installation and Configuration

1. Clone the GitHub repository: 

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview/tree/main/slide_line
```

2. Navigate to the project directory: 

```sh
cd slide_line
```

3. Use this file test to compile and run the program: 

<details>
<summary>File Test main.c</summary>
<br>

```c
#include <stdlib.h>
#include <stdio.h>

#include "slide_line.h"

#define LINE_SIZE   32

/**
 * print_array - Prints out an array of integer, followed by a new line
 * 
 * @array: Pointer to the array of integer to be printed
 * @size: Number of elements in @array
 */
static void print_array(int const *array, size_t size)
{
    size_t i;

    printf("Line: ");
    for (i = 0; i < size; i++)
        printf("%s%d", i > 0 ? ", " : "", array[i]);
    printf("\n");
}

/**
 * main - Entry point
 *
 * @ac: Arguments counter
 * @av: Arguments vector
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int ac, char **av)
{
    int line[LINE_SIZE];
    int direction;
    size_t i, size;

    if (ac < 3)
    {
        fprintf(stderr, "Usage: %s <R/L> <n1> [n2...]\n", av[0]);
        return (EXIT_FAILURE);
    }

    /* Command line arguments to array of int */
    size = ac - 2;
    if (size > LINE_SIZE)
        size = LINE_SIZE;
    for (i = 0; i < size; i++)
        line[i] = atoi(av[i + 2]);

    /* Print the array */
    print_array(line, size);

    /* Parse direction */
    switch (*(av[1]))
    {
    case 'L':
        direction = SLIDE_LEFT;
        printf("Slide to the left\n");
        break;
    case 'R':
        direction = SLIDE_RIGHT;
        printf("Slide to the right\n");
        break;
    default:
        fprintf(stderr, "Unknown direction '%c'. Please use 'L' or 'R'", *(av[1]));
        return (EXIT_FAILURE);
    }

    /* Slide and merge */
    if (!slide_line(line, size, direction))
    {
        fprintf(stderr, "Failed to slide and merge line\n");
        return (EXIT_FAILURE);
    }

    /* Print the array */
    print_array(line, size);

    return (EXIT_SUCCESS);
}
```

</details>
<br>

4. Compile with GCC: 

```sh
gcc -Wall -Wextra -Werror -pedantic -o slide_line main.c slide_line.c
```

## 💡 Use

- Run the program: 

```sh
./slide_line L 2 2 0 0
```

- Result of the example above: 

```sh
Line: 2, 2, 0, 0
Slide to the left
Line: 4, 0, 0, 0
```

- Use `L` to drag to the left and `R` to drag to the right followed by the numbers of the line.

## ✨ Main Features

1. **Slide and Merge**: Allows you to move and merge numbers in a line according to the rules of game 2048.
2. **Entry Management**: Processes the user's entries to determine the direction of movement.

## 📝 List of Tasks

0. [**Slide line**](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/slide_line/0-slide_line.c): Implementation of the drag and merge number functionality.

## 📬 Contact

- **LinkedIn Profile**: [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel-9ab457261/)
