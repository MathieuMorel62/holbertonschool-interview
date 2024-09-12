# <p align='center'>🌟 Prime Game 🌟</p>

## 📝 Description

Prime Game is an algorithmic game project where two players, Maria and Ben, participate in a series of rounds based on prime numbers. The game takes place with a set of consecutive integers, starting from 1 to a given number (n). Players take turns to choose a prime number and eliminate that number and all its multiples of the set. The player who can no longer make a move loses the game.

The project consists of determining, after several rounds, the winner according to the optimal strategies adopted by the players. The program must determine the winner for each round and return the name of the player who has won the most rounds. This project tests the optimization of algorithms and the ability to manipulate prime numbers effectively.

## 📚 Resources

- [Introduction to algorithms](https://fr.wikipedia.org/wiki/Introduction_aux_algorithmes)
- [First name algorithms](https://fr.wikipedia.org/wiki/Nombre_premier)

## 🛠️ Technologies and Tools Used

- **Python**: Used for game development and the manipulation of prime numbers because of its ease of use and integrated mathematical libraries.
- **PEP 8**: The style guide to ensure that the code is clean, readable and meets the standards of the Python community.

## 📋 Prerequisites

![ Python](https://img.shields.io/badge/python-3.4.x-blue): The project requires Python version 3.4.x.

![ Ubuntu](https://img.shields.io/badge/Ubuntu-14.04_LTS-orange): The code must be executed on a machine with Ubuntu 14.04 LTS.

![ PEP 8](https://img.shields.io/badge/PEP%208-v1.7.x-green): All files must comply with the PEP style 8 version 1.7.x.

## 📊 Data Files

<details>
<summary>main_0.py</summary>
  
```python
#!/usr/bin/python3

isWinner = __import__('0-prime_game').isWinner


print("Winner: {}".format(isWinner(5, [2, 5, 1, 4, 3])))
```
</details>

## 🚀 Installation and Configuration

1. Step 1: Clone the GitHub repository.

```bash
git clone https://github.com/MathieuMorel62/holbertonschool-interview.git
```

2. Step 2: Move to the repository folder.

```bash
cd holbertonschool-interview/primegame
```

3. Step 3: Run the main file.

```bash
./main_0.py
```

## 💡 Use

- Example of use of the program:

```bash
./main_0.py
```

- Output:

```bash
Winner: Ben
```

## ✨ Main Features

1. **Determination of the winner:** The program evaluates each game according to Maria and Ben's optimal strategies to choose prime numbers and their multiples.

2. **Optimization of prime selection:** Depending on the algorithm used, the program optimizes the way prime numbers are selected and their multiples eliminated from the game.

3. **Flexibility of rounds:** The game allows you to play several rounds with values `n` different, and calculates the final winner according to the total number of victories of each player.

## 📝 List of Tasks

| Number | Task | Description |
| ------ | --------------------------- | ------------------------------------------------------------------------------------ |
| 0 | [Prime Game](https://github.com/MathieuMorel62/holbertonschool-interview/tree/main/primegame) | Implement a function `isWinner(x, nums)` that determines the winner after several rounds of the Prime Game. |

## 📬 Contact
- LinkedIn Profile: [Mathieu Morel](https://www.linkedin.com/in/mathieumorel62/)
