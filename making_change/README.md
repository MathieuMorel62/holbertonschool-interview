# <p align="center">🌟 Making Change 🌟</p>

## 📝 Description

**Making Change** is a project to solve the problem of finding the minimum number of coins necessary to reach a given total amount from a set of coins of different values. This project highlights algorithm and optimization skills.

Users can take advantage of this project to learn how to design effective algorithms, manipulate lists and manage borderline cases in real-world applications. By using this project, we can understand how theoretical concepts in computer science can be applied to solve practical problems.

## 📚 Resources

- [Python List Methods](https://www.w3schools.com/python/python_ref_list.asp)
- [Algorithm Design and Analysis](https://www.geeksforgeeks.org/fundamentals-of-algorithms/)
- [PEP 8 Style Guide for Python Code](https://www.python.org/dev/peps/pep-0008/)
- [Python 3.4.3 Documentation](https://docs.python.org/3.4/)

## 🛠️ Technologies and Tools Used

- `Python`: Used to write the scripts and algorithms necessary for the project because of its simplicity and power.
- `Ubuntu 14.04 LTS`: Operating system on which scripts are executed and tested, providing a stable and consistent environment.
- `PEP 8`: Style guide to ensure the readability and consistency of the code.

## 📋 Prerequisite

- ![ Python](https://img.shields.io/badge/python-3.4.3-blue)
- ![ Ubuntu](https://img.shields.io/badge/Ubuntu-14.04_LTS-orange)
- ![ PEP 8](https://img.shields.io/badge/PEP_8-1.7.x-blueviolet)

## 📊 Data Files
<details>
<summary>0-main.py</summary>
<br>

```python
#!/usr/bin/python3
"""
Main file for testing
"""
makeChange = __import__('0-making_change').makeChange
print(makeChange([1, 2, 25], 37))
print(makeChange([1256, 54, 48, 16, 102], 1453))
```

</details>

## 🚀 Installation and Configuration

1. **Clone the GitHub repository:**

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview.git
```

2. **Navigate to the project folder:**

```sh
cd making_change
```

3. **Ensure that all files are executable:**

```sh
chmod u+x *.py
```

4. **Run the main file:**

```sh
./0-main.py
```

## 💡 Use

- **Example of use with the data file test:**

Run the following command:

```python
./0-main.py
```

Result:

```sh
7
-1
```

✨ Main Features

1. **Calculation of the minimum number of parts:** Allows you to find the minimum number of pieces needed to reach a given amount.

2. **Management of limit cases:** Manages cases where the total amount is zero or negative by returning zero.

3. **Infinite quantity of each piece:** Assumes an infinite quantity of each type of part, which simplifies the implementation of the algorithm.

## 📝 List of Tasks

| Number | Task | Description |
| ------ | ----------------------- | ------------------------------------------------------------------------------- |
| 0 | [Change comes from within](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/making_change/0-making_change.py) | Given a pile of coins of different values, determine the fewest number of coins needed to meet a given amount total. |

## 📬 Contact
- LinkedIn Profile: [Mathieu Morel](https://www.linkedin.com/in/mathieumorel62/)
