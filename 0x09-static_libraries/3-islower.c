#include "main.h"

/**
 * _islower - Functions that checks fo lowercase character
 * @c: character to be evaluated
 * Return: 1 if c is lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
