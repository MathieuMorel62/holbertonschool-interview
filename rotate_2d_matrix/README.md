# <p align="center">🌟 Rotate 2D Matrix 🌟</p>

![matrix](https://github.com/MathieuMorel62/holbertonschool-interview/assets/113856302/2b42bb5a-4b68-4acc-ad8b-99fdfe1f3459)

## 📝 Description

The **Rotate 2D Matrix** project consists of writing a function in Python to rotate a square matrix (n x n) by 90 degrees clockwise. This function is designed to modify the matrix in place, i.e. without using an additional data structure to store the result of the rotation.

The main objective is to strengthen matrix manipulation and algorithm skills, using Python programming tools and techniques. This project is an excellent opportunity to understand matrix rotations, which is fundamental in various fields such as computer graphics, computer vision and image processing algorithms.

## 📚 Resources

- [Python Documentation](https://docs.python.org/3/)
- [PEP 8 – Style Guide for Python Code](https://www.python.org/dev/peps/pep-0008/)
- [Understanding 2D Arrays in Python](https://www.geeksforgeeks.org/python-using-2d-arrays-lists-the-right-way/)

## 🛠️ Technologies and Tools Used

- **Python 3.4.3:** Used for the implementation of the matrix rotation function. Python is chosen for its simplicity and powerful data manipulation capabilities.
- **PEP 8:** Style guide for Python code, ensuring that the code is clean and readable.
- **Ubuntu 14.04 LTS:** Execution environment used to guarantee the compatibility and consistency of results.

## 📋 Prerequisite

- ![Python](https://img.shields.io/badge/python-3.4.3-blue)
- ![PEP8](https://img.shields.io/badge/PEP8-1.7.x-green)
- ![Ubuntu](https://img.shields.io/badge/ubuntu-14.04--LTS-orange)

## 📊 Data Files

<details>
<summary>main_0.py</summary>
<br>

```python
#!/usr/bin/python3
"""
Test  - Rotate 2D Matrix
"""

rotate_2d_matrix = __import__('0-rotate_2d_matrix').rotate_2d_matrix

if __name__ == "__main__":
    matrix = [[1, 2, 3],
              [4, 5, 6],
              [7, 8, 9]]

    rotate_2d_matrix(matrix)
    print(matrix)
```

</details>

## 🚀 Installation and Configuration

1. **Step 1:** Clone the project's GitHub repository.

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview.git
```

2. **Step 2:** Navigate to the project's directory.

```sh
cd rotate_2d_matrix
```


## 💡 Use

- **Example of use 1:** Test the matrix rotation function with an example of a 3x3 matrix.

```sh
./main_0.py
```

This will display the matrix after rotation:

```sh
[[7, 4, 1],
 [8, 5, 2],
 [9, 6, 3]]
```

## ✨ Main Features

- **Matrix rotation**: The rotate_2d_matrix function allows you to rotate a square matrix 90 degrees clockwise by modifying the matrix in place.

- **Compatibility**: The code is compatible with Python 3.4.3 and complies with PEP 8 coding standards.

- **Ease of use**: The project includes a `main_0.py` script to test the function with matrix examples.

## 📝 List of Tasks

| Number | Task | Description |
| ------ | ----------------------- | ------------------------------------------------------------------------------- |
| 0 | [Rotate 2D Matrix](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/rotate_2d_matrix/0-rotate_2d_matrix.py) | Given an n x n 2D matrix, rotate it 90 degrees clockwise. The matrix must be edited in-place. |

## 📬 Contact
- LinkedIn Profile: [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel62/)
