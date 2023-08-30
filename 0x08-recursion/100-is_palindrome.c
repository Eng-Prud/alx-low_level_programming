#include "main.h"
#include <string.h>

/**
 * mystrlen - returns lenght of string
 * @s: string whose length is checked
 * Return: 0 if null byte, recurses if otherwise
 */

int mystrlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + mystrlen(s + 1));
	}
}

/**
 * comp - compares characters of string
 * @s: string checked
 * @p1: small loop
 * @p2: big loop
 * Return: 1 or 0
 */

int comp(char *s, int p1, int p2)
{
	if (*(s + p1) == *(s + p2))
	{
		if (p1 == p2 || p1 == p2 + 1)
		{
			return (1);
		}
		else
		{
			return (0 + comp(s, p1 + 1, p2 - 1));
		}
	}
	return (0);
}

/**
 * is_palindrome  - Function that returns 1 if string is palindrome
 * @s: string
 * Return: 1 if string is palindrome, 0 if otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (comp(s, 0, mystrlen(s) - 1));
	}
}
