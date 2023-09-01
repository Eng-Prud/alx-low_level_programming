#include "main.h"

/**
 *_strspn - Gets length of prefix substring
 *@s: String to search
 *@accept: String containig acceptable bytes
 *
 * Return: No of bytes in initial segment of s
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (length);
		}
		s++;
	}

	return (length);
}
