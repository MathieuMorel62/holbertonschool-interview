# <p align="center">Minimum Operations</p>

![minOperation](https://github.com/MathieuMorel62/holbertonschool-interview/assets/113856302/9c5a57ef-b06f-4bb7-81d0-dfb5138fa728)


## Description
The **Minimum Operations** project is an algorithmic challenge aimed at optimizing operations in a text editor. In a text file initially containing the character `H`, the editor can perform only two operations: **Copy All** and **Paste**. The goal is to determine the minimum number of operations required to obtain a specified number `n` of `H` characters in the file. This project highlights effective strategies for data manipulation and memory resource optimization.

## Resources
<details>
<summary>Main Test</summary>
<br>

```python
#!/usr/bin/python3
"""
Main file for testing
"""

minOperations = __import__('0-minoperations').minOperations

n = 4
print("Min # of operations to reach {} char: {}".format(n, minOperations(n)))

n = 12
print("Min # of operations to reach {} char: {}".format(n, minOperations(n)))
```

</details>
<br>

# Minimum Operations

## Technologies and Tools Used
- **Python 3.4.3**: Programming language chosen for its efficiency and simplicity in terms of syntax.
- **Ubuntu 14.04 LTS**: Operating system on which the code will be interpreted and executed.
- **Text Editors (vi, vim, emacs)**: Development tools for writing and modifying code.

## Installation and Configuration
1. Clone the repository:

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview.git
```

2. Open the project:

```sh
cd minimum_operations
```

3. Example of use:

```sh
python3 main.py
```

This will execute the main script that calculates the minimum number of operations to reach a specified number of `H` characters.

## Main Features

- `Calculation of Minimum Operations`: Determines the minimum number of `Copy All` and `Paste` operations required.
- `Performance Optimization`: Code designed to minimize memory usage and increase efficiency.

## Task List

- [**Minimum Operations**](https://github.com/MathieuMorel62/holbertonschool-interview/tree/main/minimum_operations) : Creation of a method to calculate the minimum number of operations required to obtain `n` `H` characters.

## Contact
- **LinkedIn Profile**: [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel-9ab457261/)

