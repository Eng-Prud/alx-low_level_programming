#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: first n bytes of s2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int p;
	unsigned int m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	cat = malloc(len1 + n + 1);

	if (cat == NULL)
		return (NULL);
	for (p = 0; p < len1; p++)
	{
		cat[p] = s1[p];
	}
	for (m = 0; m < n; m++, p++)
	{
		cat[p] = s2[m];
	}
	cat[p] = '\0';
	return (cat);
}
