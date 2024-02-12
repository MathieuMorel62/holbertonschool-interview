#!/usr/bin/python3
""" Script that reads stdin line by line and computes metrics """

import sys
from collections import defaultdict
import random
from time import sleep


def print_stats(file_size, status_counts):
    """
    Print the file size and status code counts.

    Args:
        file_size (int): The total file size.
        status_counts (dict): A dict containing the count of each status code.

    Returns:
        None
    """
    print("File size:", file_size)
    for status_code in sorted(status_counts.keys()):
        print(f"{status_code}: {status_counts[status_code]}")


if __name__ == "__main__":
    file_size = 0
    status_counts = defaultdict(int)
    line_count = 0

    try:
        for line in sys.stdin:
            line = line.strip()
            elements = line.split()

            if len(elements) >= 5:
                file_size += int(elements[-1])
                status_code = elements[-2]

                if status_code.isdigit():
                    status_counts[status_code] += 1
                line_count += 1

            if line_count == 10:
                print_stats(file_size, status_counts)
                line_count = 0

    except KeyboardInterrupt:
        print_stats(file_size, status_counts)
        sleep(random.random())
        raise

    print_stats(file_size, status_counts)
