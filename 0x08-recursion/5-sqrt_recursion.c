#include "main.h"
/**
 * _recursion2 - Function to find sqrt
 * @n: Number whose square root is found
 * @sqrt: Value incremented from 1 to  find if it's the actual sqrt
 * Return: -1 if n has no natural sqrt
 */

int _recursion2(int n, int sqrt)
{
	if (sqrt * sqrt == n)
	{
		return (sqrt);
	}
	else if (sqrt * sqrt > n)
	{
		return (-1);
	}
	else
	{
		return (_recursion2(n, sqrt + 1));
	}
}

/**
 *_sqrt_recursion - Function that returns the natural square root of a number
 *@n: Number tofind sqrt
 *Return: -1 for unnatural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_recursion2(n, 0));
	}
}
