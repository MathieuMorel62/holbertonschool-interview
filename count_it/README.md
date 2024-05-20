# <p align="center">🌟 Count it! 🌟</p>

![count it](https://github.com/MathieuMorel62/holbertonschool-interview/assets/113856302/39ee97fa-daed-477e-9cef-609a42c54682)

## 📝 Description

**Count it!** Is a project developed to interact with the Reddit API and analyze the titles of popular articles. The project focuses on creating a recursive function capable of querying the Reddit API, analyzing the titles of popular articles, and counting occurrences of specific keywords in a case-insensitive way.

This project is designed to test skills in API manipulation, word processing and recursive programming. The results are presented in an orderly manner, sorting the keywords by their frequency of appearance and in alphabetical order in case of a tie, thus providing a clear and concise view of keyword trends in popular Reddit articles.

## 📚 Resources
- [Reddit API Documentation](https://www.reddit.com/dev/api)
- [Requests: HTTP for Humans](https://docs.python-requests.org/en/master/)
- [PEP 8 – Style Guide for Python Code](https://www.python.org/dev/peps/pep-0008/)
- [Official Python Documentation](https://docs.python.org/3/)

## 🛠️ Technologies and Tools Used

- `Python`: Used to write scripts and interact with the Reddit API using the Requests module.
- `Requests`: Python module to send HTTP requests to the Reddit API.
- `Ubuntu 14.04 LTS`: Operating system used for code execution and testing.
- `PEP 8`: Style guide to ensure that the Python code is clean and readable.

## 📋 Prerequisite

- ![Python](https://img.shields.io/badge/python-3.4.3-blue)
- ![Ubuntu](https://img.shields.io/badge/ubuntu-14.04-orange)

## 📊 Data Files

<details>
<summary>0-main.py</summary>
<br>

```python
#!/usr/bin/python3
"""
0-main
"""
import sys

if __name__ == '__main__':
    count_words = __import__('0-count').count_words
    if len(sys.argv) < 3:
        print("Usage: {} <subreddit> <list of keywords>".format(sys.argv[0]))
        print("Ex: {} programming 'python java javascript'".format(sys.argv[0]))
    else:
        result = count_words(sys.argv[1], [x for x in sys.argv[2].split()])
```

</details>

## 🚀 Installation and Configuration

1. Step 1: Clone the GitHub repository on your local machine.

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview.git
```

2. Step 2: Navigate to the folder containing the project.

```sh
cd count_it
```

3. Step 3: Install the Requests module if you have not already done so.

```sh
pip install requests
```

4. Step 4: Make Python files executable.

```sh
chmod +x 0-main.py 0-count.py
```

## 💡 Use

- Example of use 1: To count keywords in a specific subreddit, use the following command:

```sh
python3 0-main.py programming 'react python java javascript scala no_results_for_this_one'
```

Output:

```sh
python: 28
javascript: 23
java: 10
react: 10
```

## ✨ Main Features

- **Interaction with the Reddit API**: The project uses the Requests module to send HTTP requests to the Reddit API and retrieve popular articles.
- **Text analysis**: The script analyzes article titles to count the occurrences of specific keywords.
- **Recursive operation**: The counting function uses recursion to browse Reddit's result pages.
- **Sorting of results**: The results are sorted by frequency of occurrence of keywords and, in case of a tie, in alphabetical order.
- **Keyword management**: The script supports case-insensitive keywords and eliminates punctuation marks.

## 📝 List of Tasks

| Number | Task | Description |
| ------ | ----- | ----------- |
| 0 | **[Count it!](https://github.com/MathieuMorel62/holbertonschool-interview/tree/main/count_it)** | Recursive function to query the Reddit API and count keywords in titles. |

## 📬 Contact

- LinkedIn Profile: [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel62/)
