# <p align="center">🌟 Infinite Multiplication 🌟</p>

## 📝 Description

The **Infinite Multiplication** project aims to develop a program capable of multiplying two large positive numbers. This application is particularly useful in contexts where standard arithmetic operations are not enough because of the size of the numbers to be manipulated. The program takes two numbers in base 10 and displays the result of their multiplication.

The main features of the project include the management of input errors, the restricted use of certain functions of the standard C library, and compliance with Betty Style specific coding standards. The project highlights the importance of optimizing and the efficiency of the algorithms used to perform calculations on very large numbers.


## 📚 Resources

- [Official GCC documentation](https://gcc.gnu.org/)
- [Tutorial on memory management in C](https://www.learn-c.org/en/Memory_management)
- [C standard reference manual](https://en.cppreference.com/w/c)
- [Guide to good programming practices in C](https://www.cprogramming.com/begin.html)
- [Betty Style Guide](https://github.com/hs-hq/Betty)


## 🛠️ Technologies and Tools Used

- **C**: Used to write the program because of its performance and ability to manipulate low-level operations.
- **GCC (GNU Compiler Collection)**: Used to compile C source code with strict compilation options to ensure code quality.
- **Betty**: Used to verify the compliance of the code with Holberton's style standards.
- **Valgrind**: Used to detect memory leaks and dynamic memory allocation errors.

## 📋 Prerequisite

- ![ Ubuntu](https://img.shields.io/badge/OS-Ubuntu%2014.04%20LTS-orange)
- ![ GCC](https://img.shields.io/badge/GCC-4.8.4-blue)
- ![ Betty](https://img.shields.io/badge/Betty-Style%20Guide-green)


## 📊 Data Files
<details>
<summary>_putchar.c</summary>
<br>

```c
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
```

</details>

## 🚀 Installation and Configuration

1. **Step 1: Clone the deposit**

```bash
git clone https://github.com/MathieuMorel62/holbertonschool-interview.git
```

2. **Step 2: Move to the directory**

```bash
cd infinite_multiplication
```

3. **Step 3: Compile the program**

```bash
gcc -Wall -pedantic -Werror -Wextra 0-mul.c -o mul
```

4. **Step 4: Run the program**

```bash
./mul number1 number2
```

Replace `number1` and `number2` with the numbers you want to multiply.

## 💡 Use

- **Example of use 1:**

```sh
.mul 123 456
```

This command will multiply the numbers `123` and `456` and display the result `56088`.

## ✨ Main Features

1. **Multiplication of large numbers**: The program can multiply two large positive numbers, which is not possible with standard integer data types in C.

2. **Management of input errors**: The program checks that the entries are valid (composed only of numbers) and displays an appropriate error message in the event of a problem.

3. **Efficient use of memory**: The program uses dynamic allocations to manage memory, which makes it possible to manipulate numbers of arbitrary size.

## 📝 List of Tasks

| Number | Stain | Description |
| ------ | ----------------------- | ------------------------------------------------------------------------------- |
| 0 | [Infinite Multiplication](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/infinite_multiplication/0-mul.c) | Write a program that multiplies two positive numbers. |

## 📬 Contact
- LinkedIn Profile: [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel62/)
