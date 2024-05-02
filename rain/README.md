# <p align="center">Rain</p>

![rain](https://github.com/MathieuMorel62/holbertonschool-interview/assets/113856302/3bf5ff82-320b-48ce-b82d-4dcf729d4edc)

## 📝 Description

The "Rain" project is an algorithmic simulation to determine the amount of water retained between the walls after a rain, based on a series of integers representing the height of the walls in a section view. This simulation is useful for understanding the concepts of data processing and calculating spaces in non-linear structures.

The algorithm uses a list of non-negative integers to represent the heights of the walls and calculates the space of the water retained after a rain. It is designed to be effective and accurate, offering potential uses in the fields of geographical modeling and environmental simulations.

## 📚 Resources

- [Python Documentation](https://www.python.org/doc/)
- [PEP 8 – Style Guide for Python Code](https://pep8.org/)
- [Visualization of algorithmics](https://visualgo.net/en)

## 🛠️ Technologies and Tools Used

- **Python 3.4.3**: Programming language chosen for its simplicity and efficiency in list manipulation.
- **GitHub**: Used for versioning and source code management.
- **Visual Studio Code**: Code editor chosen for its robust support for Python extensions and its integration with Git.

## 📋 Prerequisite

<img src="https://img.shields.io/badge/Python-3.4.3-3776AB?style=for-the-badge&logo=python&logoColor=white" alt="Python 3.4">

<img src="https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white" alt="Git">

<img src="https://img.shields.io/badge/code%20style-PEP8-brightgreen.svg?style=for-the-badge" alt="PEP8">

## 📊 Data Files
<details>
<summary>main.py</summary>
<br>

```python
#!/usr/bin/python3
"""
0_main
"""
rain = __import__('0-rain').rain

if __name__ == "__main__":
    walls = [0, 1, 0, 2, 0, 3, 0, 4]
    print(rain(walls))
    walls = [2, 0, 0, 4, 0, 0, 1, 0]
    print(rain(walls))

```
</details>

## 🚀 Installation and Configuration

1. Clone the GitHub repository:

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview/
```

2. Navigate to the folder:

```sh
cd rain
```

3. Run the algorithm:

```sh
./main.py
```

## 💡 Use

Run the main script to see the water retention simulation:

```sh
./main.py
```

- Visual representation of the walls [0, 1, 0, 2, 0, 3, 0, 4]:

<img width="450" alt="graph1" src="https://github.com/MathieuMorel62/holbertonschool-interview/assets/113856302/7479595b-10a8-403c-a7c3-4d6d677f959d">

- Visual representation of the walls [2, 0, 0, 4, 0, 0, 1, 0]:

<img width="450" alt="graph2" src="https://github.com/MathieuMorel62/holbertonschool-interview/assets/113856302/51f68457-5a0e-4b28-9bd9-70f9167c7d2c">

## ✨ Main Features

1. **Calculation of the retained water**: The algorithm precisely calculates the volume of water retained between the walls after the rain.
2. **Visual simulation**: A graphic representation to better understand the layout of the walls and the water retained.

## 📝 List of Tasks

| Number | Task | Description |
| ------ | --------------------------------------- | ----------------------------------------------------------- |
| 0 | [**Rain mandatory**](https://github.com/MathieuMorel62/holbertonschool-interview/tree/main/rain/0-rain.py) | Calculate and display the amount of water retained after the rain. |

## 📬 Contact

- Profil LinkedIn: [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel-9ab457261/)
