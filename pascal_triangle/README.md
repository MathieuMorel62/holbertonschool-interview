# <p align="center">🌟 Pascal's Triangle 🌟</p>

![triangle pascal](https://github.com/user-attachments/assets/816e6c8d-543b-43b6-b506-6ed10edb82ba)

## 📝 Description

The **Pascal's Triangle** project aims to implement a function in Python capable of generating Pascal's triangle, a mathematical triangle-shaped structure where each number is the sum of the two numbers directly above it in the previous row.

This project highlights key skills in algorithms and list manipulation in Python, with the objective of providing an effective solution to generate Pascal's triangle up to a specified number of rows. The solution must be robust, able to manage valid inputs while ensuring optimal performance.

## 📚 Resources

- [Pascal's Triangle - Wikipedia](https://en.wikipedia.org/wiki/Pascal%27s_triangle)

## 🛠️ Technologies and Tools Used

- **Python**: The programming language used to implement Pascal's triangle generation function. Python was chosen for its simplicity and power in manipulating data structures.

- **Git**: Used for project version control, allowing you to track changes and collaborate effectively.

## 📋 Prerequisite

- ![ Python](https://img.shields.io/badge/python-3.8-blue): Make sure you have Python 3.x installed to run the script.
- ![ Git](https://img.shields.io/badge/git-latest-brightgreen): Git must be installed to clone the project and manage versions.

## 📊 Data Files

<details>
<summary>0-main.py</summary>
<br>

```python
#!/usr/bin/python3
"""
0-main
"""
pascal_triangle = __import__('0-pascal_triangle').pascal_triangle

def print_triangle(triangle):
    """
    Print the triangle
    """
    for row in triangle:
        print("[{}]".format(",".join([str(x) for x in row])))

if __name__ == "__main__":
    print_triangle(pascal_triangle(5))
```
</details>

## 🚀 Installation and Configuration

1. **Step 1:** Clone the GitHub repository

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview.git
```

2. **Step 2:** Navigate to the project folder

```sh
cd pascal_triangle
```

3. **Step 3:** Run the Python script

```sh
./0-main.py
```

## 💡 Use

- **Example of use 1:** Generate a 5-line Pascal triangle.

```sh
./0-main.py
```

- **Result:**

```sh
[1]
[1, 1]
[1, 2, 1]
[1, 3, 3, 1]
[1, 4, 6, 4, 1]
```

## ✨ Main Features

1. **Dynamic generation of Pascal's triangle:** The script generates Pascal's triangle for a given number of rows, making it possible to obtain a visual representation of the triangle in console.

2. **Entry validation:** The program manages cases where the entry is not valid (for example, a negative number) by returning an empty list.

3. **Modular structure:** The project is structured to allow easy reuse and extension of the code for additional features.

## 📝 List of Tasks

| Number | Task | Description |
| ------ | ----------------------- | ------------------------------------------------------------------------------- |
| 0 | [Pascal's Triangle](https://github.com/MathieuMorel62/holbertonschool-interview/tree/main/pascal_triangle) | Implement a `def pascal_triangle(n):` function that returns a list of integer lists representing Pascal's triangle to `n` lines. |

## 📬 Contact

- LinkedIn Profile: [Mathieu Morel](https://www.linkedin.com/in/mathieumorel62/)
