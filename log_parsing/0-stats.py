#!/usr/bin/python3
"""Parse logs and print statistics"""
import sys

file_sizes = [0]
http_status_count = {
    '200': 0,
    '301': 0,
    '400': 0,
    '401': 0,
    '403': 0,
    '404': 0,
    '405': 0,
    '500': 0
}


def print_statistics():
    """Print the collected statistics"""
    print(f'File Size: {sum(file_sizes)}')
    for status_code, count in sorted(http_status_count.items()):
        if count:
            print(f'{status_code}: {count}')


if __name__ == "__main__":
    """Parse logs and print statistics"""
    try:
        for line_number, line in enumerate(sys.stdin, start=1):
            line_parts = line.rstrip().split()
            try:
                current_status_code = line_parts[-2]
                current_file_size = line_parts[-1]
                if current_status_code in http_status_count.keys():
                    http_status_count[current_status_code] += 1
                file_sizes.append(int(current_file_size))
            except Exception:
                pass
            if line_number % 10 == 0:
                print_statistics()
        print_statistics()
    except KeyboardInterrupt:
        print_statistics()
        raise
