#include "main.h"

/**
 * wildcmp2 - Recursive Function
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if strings empty
 */

int wildcmp2(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (*s1 == '\0')
		{
			return (wildcmp2(s1, s2 + 1));
		}
		else
		{
			return (wildcmp2(s1 + 1, s2) || wildcmp2(s1, s2 + 1));
		}
	}
	if (*s1 == *s2)
	{
		return (wildcmp2(s1 + 1, s2 + 1));
	}
	return (0);
}

/**
 * wildcmp - Function to compare two strings
 * @s1: string one
 * @s2: string two
 * Return: call function wildcmp2
 */

int wildcmp(char *s1, char *s2)
{
	return (wildcmp2(s1, s2));
}
