# <p align="center">Menger Sponge</p>

## 📝 Description

The Menger Sponge project aims to create a visual representation of a Menger sponge in 2D. This project highlights the concepts of fractals and algorithmic programming, allowing users to visualize different levels of complexity of this fascinating fractal structure.

## 📚 Resources

- [Fractals in Mathematics](https://en.wikipedia.org/wiki/Fractal#:~:text=In%20mathematics%2C%20a%20fractal%20is,magnifications%20of%20the%20Mandelbrot%20set.)
- [Betty style guide](https://github.com/hs-hq/Betty)
- [Introduction to programming in C](https://devdocs.io/c/)
- [Menger Sponge](https://en.wikipedia.org/wiki/Menger_sponge)

## 🛠️ Technologies and Tools Used

- **C**: Programming language chosen for its speed and proximity to the system.
- **GCC**: Used to compile programs, with options to improve the security and quality of the code.
- **Git**: Versioning tool for monitoring and collaboration in the development of the project.

## 📋 Prerequisite

- **Operating system**: Ubuntu 14.04 LTS or higher.
- **Compiler**: GCC 4.8.4 with the flags `-Wall -Werror -Wextra -pedantic`.
- **Mathematical Bookstore**: Necessary for complex calculations (`-lm`).

## 📊 Data Files

<details>
<summary>main.c</summary>
<br>

```c
#include <stdio.h>
#include <stdlib.h>

#include "menger.h"

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
    int level;

    if (ac < 2)
    {
        fprintf(stderr, "Usage: %s level\n", av[0]);
        return (EXIT_FAILURE);
    }

    level = atoi(av[1]);
    menger(level);

    return (EXIT_SUCCESS);
}
```

</details>

## 🚀 Installation and Configuration

1. **Clone the repository**: 

```bash
git clone https://github.com/MathieuMorel62/holbertonschool-interview/
```

2. **Navigate to the directory**:

```bash
cd menger
```

3. **Compilation**: 

```bash
gcc -Wall -Wextra -Werror -pedantic -o menger menger.c main.c -lm
```

4. **Execution**: 

```bash
./menger
```

## 💡 Use

- To generate a Menger sponge of level N, run the program with the desired level as an argument: `./executable_name N`.
- For example, `./menger 2` will display a level 2 Menger sponge.

## ✨ Main Features

1. **Fractal Generation**: Produces a visual representation of Menger's sponge at different levels.
2. **Level Parameterization**: Allows the user to specify the level of complexity of the fractal.

## 📝 List of Tasks

| Number | Task                   | Description                                                                     |
| ------ | ---------------------- | ------------------------------------------------------------------------------- |
| 0      | [**2D Menger Sponge**](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/menger/0-menger.c) | Implementation of a function to draw a Menger sponge in 2D. |


## 📬 Contact

- LinkedIn profile: [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel-9ab457261/)
