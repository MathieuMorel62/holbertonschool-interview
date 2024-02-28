#include "palindrome.h"

/**
 * is_palindrome - Checks if a number is a palindrome.
 * A palindrome is a sequence that reads the same forwards and backwards.
 *
 * @n: The number to be checked.
 *
 * Return: 1 if the number is a palindrome, 0 if it's not.
 */
int is_palindrome(unsigned long n)
{
	unsigned long reversed = 0, remainder, original;

	original = n;

	while (n != 0)
	{
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}

	if (original == reversed)
		return (1);
	else
		return (0);
}
