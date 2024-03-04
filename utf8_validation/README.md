UTF-8 Validation

![ Image of the project Validation UTF-8](link_to_image)

## 📝 Description
This project consists of writing a method to determine whether a data set represents a valid UTF-8 encoding. The `validUTF8(data)` method returns `True` if the data is a valid UTF-8 encoding, otherwise `False`. Each character in UTF-8 can be 1 to 4 bytes long, and the data set can contain several characters. The data is represented by a list of integers, each integer representing 1 byte of data, and only the least significant 8 bits of each integer are processed.

## 📚 Resources
- [Documentation UTF-8](https://fr.wikipedia.org/wiki/UTF-8)
- [Python 3 Documentation](https://docs.python.org/3/)
- [PEP Style Guide 8](https://www.python.org/dev/peps/pep-0008/)
- [Other resources as needed]

## 🛠️ Technologies and Tools Used
- **Python 3**: Main programming language for the implementation of the algorithm.
- **Git and GitHub**: For version control and collaboration.

## 📋 Prerequisite
- Python 3.8 or higher
- An integrated development environment (IDE) supporting Python (recommended: VSCode, PyCharm)

## 🚀 Installation and Configuration

1. Clone the GitHub repository: 

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview/
```

2. Navigate to the project file: 

```sh
cd utf8_validation
```

3. Run the Python script: 

```sh
python3 validate_utf8.py
```

## 💡 Use
- To test the `validUTF8(data)` method, create a Python file and import the method. Then, pass a list of integers representing the data to be validated.

<details>
<summary>Main Test</summary>
<br>

```python
#!/usr/bin/python3
"""
Main file for testing
"""

validUTF8 = __import__('0-validate_utf8').validUTF8

data = [65]
print(validUTF8(data))

data = [80, 121, 116, 104, 111, 110, 32, 105, 115, 32, 99, 111, 111, 108, 33]
print(validUTF8(data))

data = [229, 65, 127, 256]
print(validUTF8(data))
```

</details>

## ✨ Main Features
1. **UTF-8 validation**: Checks if a list of integers represents a valid UTF-8 encoding.

## 📝 List of Tasks
0. [**UTF-8 validation**](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/utf8_validation/0-validate_utf8.py): Write a method determining whether a data set represents a UTF-8 encoding.

## 📬 Contact

- **LinkedIn Profile**: [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel-9ab457261/)
