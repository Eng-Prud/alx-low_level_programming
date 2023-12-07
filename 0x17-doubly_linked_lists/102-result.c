#include <stdio.h>

/**
 * is_palindrome - Checks if a number is a palindrome
 * @num: The number to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(int num)
{
	int reversed = 0, original = num;

	while (num > 0)
	{
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}

	return (original == reversed);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, max_palindrome = 0;

	for (i = 999; i >= 100; i--)
	{
		for (j = i; j >= 100; j--)
		{
			int product = i * j;

			if (product < max_palindrome)
				break;

			if (is_palindrome(product) && product > max_palindrome)
				max_palindrome = product;
		}
	}

	printf("%d", max_palindrome);

	return (0);
}
