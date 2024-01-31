# Sandpiles
This project, entitled "Sandpiles", is a C programming challenge focused on algorithmics and complex problem solving. It involves the calculation of the sum of two piles of sand, represented in the form of 3x3 grids. Each cell of the grid contains a number representing the amount of grains of sand. The project focuses on developing effective solutions, compliance with coding standards, and a thorough understanding of data structures and algorithms.

## Ressources
- [Sandpiles - Numberphile](https://www.youtube.com/watch?v=1MtEUErz7Gg&themeRefresh=1)

- <details>
  <summary>Main Test</summary>
  <br>

  ```c
  #include <stdlib.h>
  #include <stdio.h>

  #include "sandpiles.h"

  /**
  * print_grid_sum - Print 3x3 grids sum
  * @grid1: Left 3x3 grid
  * @grid2: Right 3x3 grid
  *
  */
  static void print_grid_sum(int grid1[3][3], int grid2[3][3])
  {
      int i, j;

      for (i = 0; i < 3; i++)
      {
          for (j = 0; j < 3; j++)
          {
              if (j)
                  printf(" ");
              printf("%d", grid1[i][j]);
          }

          printf(" %c ", (i == 1 ? '+' : ' '));

          for (j = 0; j < 3; j++)
          {
              if (j)
                  printf(" ");
              printf("%d", grid2[i][j]);
          }
          printf("\n");
      }
  }

  /**
  * print_grid - Print 3x3 grid
  * @grid: 3x3 grid
  *
  */
  static void print_grid(int grid[3][3])
  {
      int i, j;

      for (i = 0; i < 3; i++)
      {
          for (j = 0; j < 3; j++)
          {
              if (j)
                  printf(" ");
              printf("%d", grid[i][j]);
          }
          printf("\n");
      }
  }

  /**
  * main - Entry point
  *
  * Return: EXIT_SUCCESS or EXIT_FAILURE
  */
  int main(void)
  {
      int grid1[3][3] = {
          {3, 3, 3},
          {3, 3, 3},
          {3, 3, 3}
      };
      int grid2[3][3] = {
          {1, 3, 1},
          {3, 3, 3},
          {1, 3, 1}
      };

      print_grid_sum(grid1, grid2);

      sandpiles_sum(grid1, grid2);

      printf("=\n");
      print_grid(grid1);

      return (EXIT_SUCCESS);
  }

  ```
  </details>

## Prerequisites
- Operating system: `Ubuntu 14.04 LTS` or compatible.
- Compiler: `GCC 4.8.4`.
- Text editors: `vi`, `vim`, `emacs`.
- The flags: `-Wall -Werror -Wextra -pedantic`

## Installation and Configuration

1. Clone the GitHub repository: 

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview.git
```

2. Navigate to the directory:

```sh
cd sandpiles
```

3. Compile the source files: 

```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o sandpiles.
```

4. Run the application: 

```sh
./sandpiles.
```

## Main Features

1. **Simulation of the interaction between two piles of sand:** Visualize how two piles of sand interact and reach a stable state.

2. **No dynamic memory allocation:** Optimizes performance and reliability.

3. **Respect for the Betty style:** Ensures the readability and maintenance of the code.

## List of Tasks

0. [**Sum of Sandpiles**](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/sandpiles/0-sandpiles.c): Function to calculate the sum of two piles of sand and visualize their interaction.

## Contact
- **LinkedIn Profile**: [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel-9ab457261/)
