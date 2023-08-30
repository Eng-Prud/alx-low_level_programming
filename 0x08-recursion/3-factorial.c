#include "main.h"

/**
 *factorial - Function that returns factorial
 *@n: Number whose factorial is being found
 *Return: -1 to indicate error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
