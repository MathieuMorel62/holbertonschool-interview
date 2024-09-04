# <p align="center">🌟 Substring 🌟</p>

![substring](https://github.com/user-attachments/assets/f8baae9d-ec7c-4d53-ae41-1c9aaacb3ba7)

## 📝 Description

This project aims to implement a function that finds all possible substrings containing a list of words, within a given string. The objective is to detect the clues where these substrings appear under certain conditions: the words must appear exactly once, without additional characters between them, and each word has the same length.

The function returns an array containing all the clues where a valid substring is found in the analyzed string. This project focuses on the manipulation of strings in C and uses effective algorithms to find these substrings. The project follows the best coding and style practices defined by the Betty standards.

## 📚 Resources

- [KMP Algorithm - String Matching](https://www.geeksforgeeks.org/kmp-algorithm-for-pattern-searching/)

## 🛠️ Technologies and Tools Used

- **C**: The programming language used for this project because of its performance and efficiency in string management.

- **GCC**: The compiler used to compile project files with strict options such as `-Wall`, `-Werror`, `-Wextra`, and `-pedantic` to ensure the quality of the code.

- **Betty**: A set of tools used to verify the style and documentation of the code according to specific standards.

- **Ubuntu 14.04 LTS**: The operating system on which the project was developed and tested to ensure compatibility and consistency of results.

## 📋 Prerequisites

![C](https://img.shields.io/badge/C-89-brightgreen)
![GCC](https://img.shields.io/badge/gcc-4.8.4-blue)
![Ubuntu](https://img.shields.io/badge/Ubuntu-14.04%20LTS-orange)

## 📊 Data Files

<details>
<summary>main.c</summary>
<br>

```c
#include <stdlib.h>
#include <stdio.h>

#include "substring.h"

int main(int ac, char const **av)
{
    char const *s;
    char const **words;
    int nb_words;
    int *indices;
    int n;
    int i;

    if (ac < 2)
    {
        fprintf(stderr, "Usage: %s <string> [word [word2 ...]]\n", av[0]);
        return (EXIT_FAILURE);
    }

    s = av[1];
    words = av + 2;
    nb_words = ac - 2;

    indices = find_substring(s, words, nb_words, &n);

    printf("Indices -> [");
    for (i = 0; i < n; i++)
    {
        if (i)
            printf(", ");
        printf("%d", indices[i]);
    }
    printf("]\n");

    return (EXIT_SUCCESS);
}
```
</details>

## 🚀 Installation and Configuration

1. **Clone the deposit**:

```bash
git clone https://github.com/MathieuMorel62/holbertonschool-interview.git
```

2. **Navigate to the project directory**:

```bash
cd substring
```

3. **Compile the project**:

```bash
gcc -Wall -Wextra -Werror -pedantic main.c substring.c
```

4. **Run the project**:

```bash
./a.out "your_string_here" "word1" "word2" "word3" ...
```

## 💡 Use

- **Example of use 1**: Find the indices of the substrings in a given string with two concatenated words.

Command:

```bash
./a.out barfoothefoobarman foo bar
```

Result:

```bash
Indices -> [0, 9]
```

## ✨ Main Features

1. **Search for substrings:** The project detects all substrings in a given string that are an exact concatenation of a list of words.

2. **Index return:** The function returns an array containing all the indices where the valid substrings are found.

3. **Error handling:** If no valid substring is found, the function returns an empty array or NULL.

## 📝 List of Tasks

| Number | Task | Description |
| ------ | --------------------- | ----------------------------------------------------------------------------------------- |
| 0 | [Substring with concatenated words](https://github.com/MathieuMorel62/holbertonschool-interview/tree/main/substring) | Write a function that finds all possible substrings containing a list of words in a given string. The function returns the indexes of all valid substrings. |

## 📬 Contact

- LinkedIn Profile: [Mathieu Morel](https://www.linkedin.com/in/mathieumorel62/)
