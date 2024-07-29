# <p align="center">🌟 Island Perimeter 🌟</p>

## 📝 Description

This project consists of developing a function in Python called `island_perimeter` that calculates the perimeter of an island defined in a grid. The grid is a list of lists of integers where `0` represents water and `1` represents earth. Each cell is square and connected horizontally or vertically (not diagonally).

The general requirements of the project include the use of Python 3.4.3 on Ubuntu 14.04 LTS, compliance with the PEP 8 style, and the absence of imported modules. The code must be documented and executable. The main objective is to ensure that the perimeter calculation is correct, taking into account that the island is entirely surrounded by water, without internal lakes.

## 📚 Resources
- [PEP 8 Style Guide for Python Code](https://www.python.org/dev/peps/pep-0008/)
- [Official Python Documentation](https://docs.python.org/3.4/)
- [Learn Python Programming](https://www.learnpython.org/)
- [Python List Documentation](https://docs.python.org/3/tutorial/datastructures.html)

## 🛠️ Technologies and Tools Used

- **Python 3.4.3**: Used to write the code of the `island_perimeter` function. Chosen for its simplicity and wide adoption in programming.
- **PEP 8**: Style guide for Python. Ensures the readability and consistency of the code.
- **Ubuntu 14.04 LTS**: Development environment. Provides a stable and commonly used platform for the execution of Python code.

## 📋 Prerequisite

- ![ Python](https://img.shields.io/badge/Python-3.4.3-blue)
- ![ Pep8](https://img.shields.io/badge/PEP_8-1.7-blue)
- ![ Ubuntu](https://img.shields.io/badge/Ubuntu-14.04_LTS-orange)

## 📊 Data Files

<details>
<summary>0-main.py</summary>
<br>

```python
#!/usr/bin/python3
"""
0-main
"""
island_perimeter = __import__('0-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
```
</details>

## 🚀 Installation and Configuration

1. **Clone the GitHub repository:**

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview.git
```

2. **Navigate to the directory where the project was cloned:**

```sh
cd island_perimeter
```

3. **Check that Python 3.4.3 is installed:**

```sh
python3 --version
```

4. **Make files executable:**

```sh
chmod +x 0-main.py 0-island_perimeter.py
```

5. **Run the program:**

```sh
./0-main.py
```

## 💡 Use

- **Example of use:**

Run the program and check the output:

```sh
./0-main.py
```

- **Output:**

```sh
12
```

✨ Main Features

1. **Calculation of the perimeter of an island:** The island_perimeter function calculates and returns the `perimeter of the island` in a given grid. It considers the horizontal and vertical connections between earth cells.

## 📝 List of Tasks

| Number | Task | Description |
| ------ | ----------------------- | ------------------------------------------------------------------------------- |
| 0 | [Island Perimeter](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/island_perimeter/0-island_perimeter.py) | Develop an `island_perimeter` function that returns the perimeter of the island described in a grid. |

## 📬 Contact

- LinkedIn Profile: [Mathieu Morel](https://www.linkedin.com/in/mathieumorel62/)
