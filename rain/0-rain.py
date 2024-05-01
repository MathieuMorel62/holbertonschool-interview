#!/usr/bin/python3
""" Rainwater problem """


def rain(walls):
    """ Calculate how much rainwater can be trapped """
    if not walls:
        return 0

    rainwater = 0
    for i in range(1, len(walls) - 1):
        left = max(walls[:i])
        right = max(walls[i+1:])
        rainwater += max(0, min(left, right) - walls[i])

    return rainwater
