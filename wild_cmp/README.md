# <p align="center">🌟 Wild CMP 🌟</p>

## 📝 Description

The **Wild Compare project** aims to develop a function to compare two strings taking into account special characters. This function is crucial in contexts where the flexibility of string comparison is necessary, especially in filtering or search operations. The project meets the need to manage complex string comparisons, including a special character `*` that can represent any sequence of characters, including an empty string.

This project is a demonstration of an algorithmic solution that effectively manages chain comparisons in various scenarios. The implementation is carried out in C, with an emphasis on the rigor of the code, respecting strict coding standards and using style verification tools such as Betty.

## 📚 Resources

- [Understanding Wildcards in Pattern Matching](https://www.geeksforgeeks.org/wildcard-character-matching)
- [Recursion in C](https://www.learn-c.org/en/Recursion)
- [Pointers and Memory Management in C](https://www.cprogramming.com/tutorial/c/lesson6.html)
- [Betty Documentation](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)

## 🛠️ Technologies and Tools Used

- **C**: Programming language used to develop the comparison algorithm. Chosen for its performance and low-level control over memory.
- **GCC (v4.8.4)**: Compiler used to compile C code with the `-Wall -Werror -Wextra -pedantic` flags to ensure the quality and compliance of the code.
- **Betty**: Style verification tool used to ensure that the code follows the strict style standards defined.

## 📋 Prerequisite

- ![ Ubuntu 14.04 LTS](https://img.shields.io/badge/Ubuntu-14.04_LTS-orange)
- ![ GCC 4.8.4](https://img.shields.io/badge/GCC-4.8.4-brightgreen)
- ![ Betty Style](https://img.shields.io/badge/Betty-Style-yellow)


## 📊 Data Files

<details>
<summary>0-main.c</summary>
<br>

```c
#include "holberton.h"
#include <stdio.h>

/**
main - check the code.
Return: Always 0.
*/
int main(void)
{
int r;
r = wildcmp("main.c", ".c");
printf("%d\n", r);
r = wildcmp("main.c", "main*.c");
printf("%d\n", r);
r = wildcmp("main.c", "main.c");
printf("%d\n", r);
r = wildcmp("main.c", "mc");
printf("%d\n", r);
r = wildcmp("main.c", "ma********************************
c");
printf("%d\n", r);
r = wildcmp("main.c", "");
printf("%d\n", r);
r = wildcmp("main.c", "");
printf("%d\n", r);
r = wildcmp("main.c", "m.*c");
printf("%d\n", r);
r = wildcmp("main.c", ".c");
printf("%d\n", r);
r = wildcmp("main-main.c", "main.c");
printf("%d\n", r);
r = wildcmp("main", "maind");
printf("%d\n", r);
r = wildcmp("abc", "*b");
printf("%d\n", r);
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
cd wild_cmp
```

3. Compile the code:

```bash
gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-wildcmp.c -o wildcmp
```

4. Run the program:

```bash
./0-wildcmp
```

## 💡 Use

- **Example of use:**:

```bash
./0-wildcmp
```

- **Result:**:

```bash
1
1
1
1
1
1
1
0
1
1
0
0
```

## ✨ Main Features:

1. Flexible comparison of chains:
    - The `wildcmp` function allows you to compare two strings while supporting a special character * that can represent any sequence of characters, including an empty string.

2. Support for complex motifs:

    - The function handles complex patterns where the * character can be used several times in the comparison string, offering great flexibility in filtering or search operations.

## 📝 List of Tasks

| Number | Task | Description |
| ------ | ----------------------- | ------------------------------------------------------------------------------- |
| 0 | **[Wild Compare mandatory](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/wild_cmp/0-wildcmp.c)** | Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise returns 0. |

## 📬 Contact

- LinkedIn Profile: [Mathieu Morel](https://www.linkedin.com/in/mathieumorel62/)
