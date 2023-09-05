#include "main.h"
#include <stdlib.h>

/**
 * str_concat - point to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated
 * @s1: string one
 * @s2: sring to be concatenated to string one
 * Return: Null if failure
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int len1 = 0;
	int len2 = 0;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}

	cat = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (cat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		cat[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		cat[i] = s2[j];
	}
	cat[i] = s2[j];
	return (cat);
}
