#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: input strings
 * Return: Pointer to the modified string
 */

char *leet(char *str)
{
	char leet_chars[] = "aeotlAEOTL";
	char leet_nums[] = "4307143071";
	int i;
	int j;

	i = 0;

	while (str[i] != '\0')
	{
		j = 0;

		while (leet_chars[j] != '\0')
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_nums[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
