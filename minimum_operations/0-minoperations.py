#!/usr/bin/python3
"""
  This module contains the minOperations function used to determine the minimum
  number of operations needed to reach a certain number of characters 'H'
  in a text file, starting from a single 'H'.
"""


def minOperations(n):
  """
  Calculate the minimum number of operations to reach  n characters H.

  Parameters:
    n (int): The target number of H characteres.

    Returns:
      int: The minimum number of operations to reach n characters H.
      Returns 0 if n is impossible to achieve.
  """
  if n <= 1:
    return 0;

  operations = 0;
  divisor = 2;

  while n > 1:
    while n % divisor == 0:
      operations += divisor;
      n //= divisor;
    divisor += 1;

  return operations;
