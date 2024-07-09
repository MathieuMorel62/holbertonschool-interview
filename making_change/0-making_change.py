#!/usr/bin/python3
""" Making Change """


def makeChange(coins, total):
    """
    Function that determines the fewest number of coins 
    needed to meet a given amount total
    """
    if total <= 0:
        return 0

    # Initialisation du tableau dp avec une valeur suffisamment grande
    dp = [total + 1] * (total + 1)
    dp[0] = 0

    # Remplir le tableau dp
    for current_total in range(1, total + 1):
        for coin in coins:
            if coin <= current_total:
                dp[current_total] = min(dp[current_total], dp[current_total - coin] + 1)

    # Retourner le résultat
    return dp[total] if dp[total] != total + 1 else -1
