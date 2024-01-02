# Lockboxes

![lockboxes](https://github.com/MathieuMorel62/holbertonschool-interview/assets/113856302/88f2e3fb-bd83-4015-afb1-323fbf89cdf2)

## Description
Lockboxes is a Python programming project that presents an intriguing algorithmic challenge. The objective is to determine if all locked boxes can be opened using the available keys. Each box may contain keys to other boxes, thus creating an interesting puzzle to solve.

## Technologies and Tools Used
- **Programming Language:** Python 3.8.10
- **Execution Environment:** Ubuntu 14.04 LTS
- **Coding Style:** PEP 8 (version 1.7.x)

## Main Features
- **Unlocking Algorithm**: The core of the project is the `canUnlockAll(boxes)` function, which determines if all boxes can be opened.
- **List Management**: Manipulation and analysis of lists to solve the puzzle.

## Task
Here is the exercise for you to try:

<details>
<summary>Lockboxes</summary>
<br>

You have `n` number of locked boxes in front of you. Each box is numbered sequentially from `0` to `n -1` and each box may contain keys to the other boxes.

Write a method that determines if all the boxes can be opened.

- Prototype: `def canUnlockAll(boxes)`
- `boxes` is a list of lists
- A key with the same number as a box opens that box
- You can assume all keys will be positive integers
  - There can be keys that do not have boxes
- The first box `boxes[0]` is unlocked
- Return `True` if all boxes can be opened, else return `False`

<details>
<summary>Main File Test</summary>
<br>

```python
#!/usr/bin/python3

canUnlockAll = __import__('0-lockboxes').canUnlockAll

boxes = [[1], [2], [3], [4], []]
print(canUnlockAll(boxes))

boxes = [[1, 4, 6], [2], [0, 4, 1], [5, 6, 2], [3], [4, 1], [6]]
print(canUnlockAll(boxes))

boxes = [[1, 4], [2], [0, 4, 1], [3], [], [4, 1], [5, 6]]
print(canUnlockAll(boxes))
```

</details>
<details>
<summary>Result</summary>
<br>

```python
./main.py

True
True
False
```
- You can see the final code [here](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/lockboxes/0-lockboxes.py).
</details>
</details>

## Contact
- **LinkedIn Profile**: [Mathieu Morel]((https://www.linkedin.com/in/mathieu-morel-9ab457261/))
- **GitHub Project Link**: [Lockboxes Project](https://github.com/MathieuMorel62/holbertonschool-interview/tree/main/lockboxes)
