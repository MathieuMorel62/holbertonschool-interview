# Log Parsing

![Image du projet Log Parsing](image-link)

## 📝 Description
The "Log Parsing" project is a Python script designed to analyse logs. It reads entries line by line from standard input (stdin) and calculates metrics. The log data is formatted as `<IP address> - [<date>] "GET /projects/260 HTTP/1.1" <status code> <file size>`. The script generates statistics after each batch of 10 lines or on keyboard abort (CTRL + C), including total file size and number of lines per status code.

## 📚 Resources
- [Python Official Documentation](https://www.python.org/doc/)
- [Guide to Regular Expressions in Python](https://docs.python.org/3/library/re.html)
- [PEP 8 — Style Guide for Python Code](https://pep8.org/)

### **Main Test:**
<details>
<summary>0-generator.py</summary>
<br>

```python
#!/usr/bin/python3
import random
import sys
from time import sleep
import datetime

for i in range(10000):
    sleep(random.random())
    sys.stdout.write("{:d}.{:d}.{:d}.{:d} - [{}] \"GET /projects/260 HTTP/1.1\" {} {}\n".format(
        random.randint(1, 255), random.randint(1, 255), random.randint(1, 255), random.randint(1, 255),
        datetime.datetime.now(),
        random.choice([200, 301, 400, 401, 403, 404, 405, 500]),
        random.randint(1, 1024)
    ))
    sys.stdout.flush()
```

</details>

## 🛠️ Technologies and Tools Used
- **Python 3.4.3**: Main programming language, chosen for its simplicity and power in text and data manipulation.

- **Ubuntu 14.04 LTS**: Operating system on which scripts will be interpreted and executed, chosen for its stability and wide adoption.

## 📋 Prerequisite
- Python version 3.4.3
- An Ubuntu 14.04 LTS environment
- Compliance with PEP 8 style standards

## 🚀 Installation and Configuration

1. Clone the repository from GitHub:

```sh
git clone https://github.com/MathieuMorel62/holbertonschool-interview/
```

2. Navigate to the project directory:

```sh
cd log_parsing
```

3. Execute the script:

```python
./0-generator.py | ./0-stats.py 
```

## 💡 Use
- Launch the script and provide the logs via the standard input.

- Statistics will be displayed after each batch of 10 lines or during a keyboard interruption `(CTRL + C)`.

## ✨ Main Features
1. **Real-time analysis**: Reading and processing logs line by line.

2. **Statistical calculation**: Total file size and count by HTTP status code.

3. **Disruption management**: Support for keyboard interruptions for flexible use.

## 📝 List of Tasks

0. [**Log parsing**](https://github.com/MathieuMorel62/holbertonschool-interview/blob/main/log_parsing/0-stats.py): Write a script that reads stdin line by line and calculates metrics.

## Contact

- **LinkedIn Profile**: [Mathieu Morel](https://www.linkedin.com/in/mathieu-morel-9ab457261/)
