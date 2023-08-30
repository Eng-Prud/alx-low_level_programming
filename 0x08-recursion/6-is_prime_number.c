#include "main.h"

/**
 * prime2 - Function that checks whether n is prime or not
 * @n: No being checked
 * @num: divisor considered for divisibility
 * Return: 1 if prime no, 0 if not
 */

int prime2(int n, int num)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (num * num > n)
	{
		return (1);
	}
	else if (n % num == 0)
	{
		return (0);
	}
	else
	{
		return (prime2(n, num + 1));
	}
}

/**
 * is_prime_number - Function that returns prime nos
 * @n: Number being checked if prime
 * Return: returns function prime2
 */

int is_prime_number(int n)
{
	return (prime2(n, 2));
}
