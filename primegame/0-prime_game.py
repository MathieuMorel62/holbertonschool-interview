#!/usr/bin/python3
"""Prime Game"""


def isWinner(x, nums):
  """
  Determine the winner of the prime game
  """
  def count_wins(n):
    """
    Count the number of wins for Maria or Ben
    """
    if n < 2:
      return 0

    # Initialize a list to track prime numbers
    primes = [True] * (n + 1)
    primes[0] = primes[1] = False

  
    for i in range(2, int(n**0.5) + 1):
      if primes[i]:
        for j in range(i * i, n + 1, i):
          primes[j] = False

    return sum(primes) % 2

  # Count the number of wins for Maria or Ben
  maria_wins = 0
  ben_wins = 0

  # Iterate through each number in nums
  for n in nums:
    if count_wins(n) == 1:
      maria_wins += 1
    else:
      ben_wins += 1

  # Determine the winner
  if maria_wins > ben_wins:
      return "Maria"
  elif ben_wins > maria_wins:
      return "Ben"
  else:
      return "None"
