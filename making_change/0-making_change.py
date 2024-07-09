#!/usr/bin/python3
""" Making Change """


def makeChange(coins, total):
    """
    Function that determines the fewest number of coins
    needed to meet a given amount total
    """
    if total <= 0:
        return 0

    memo = {}

    def dp(n):
        if n in memo:
            return memo[n]
        if n == 0:
            return 0
        min_coins = total + 1
        for coin in coins:
            if n - coin >= 0:
                num_coins = dp(n - coin)
                if num_coins != -1:
                    min_coins = min(min_coins, num_coins + 1)
        memo[n] = -1 if min_coins == total + 1 else min_coins
        return memo[n]

    return dp(total)
