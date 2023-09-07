#include "main.h"
#include <stdlib.h>"

/**
 * count_words - function that counts a string's words
 * @s: string whose words are counted
 * Return: no of words
 */

int count_words(char *s)
{
	int flag = 0;
	int p = 0;
	int u = 0;

	for p = 0; s[p] != '\0'; p++)
	{
		if (s[p] == ' ')
			flag = 0;
		elseif (flag == 0)
		{
			flag = 1;
			u++;
		}
	}
	return (u);
}

/**
 *strtow - Function that splits words in a string
 *@str: string to be split
 *Return: NULL if program fails
 */
char **strtow(char *str)
{
	int i;
	int v = 0;
	int len = 0;
	int words;
	int p = 0;
	int start;
	int end;
	char **arr;
	char *tmp;

	while (str[len] != '\0')
		len++;
	words = count_words(str);
	if (words == 0)
	{
		return (NULL);
	}
	arr = (char**)malloc((sizeof(char *) * (words + 1));

	if (arr == NULL)
	{
		return(NULL);
	}
	for (i = 0; i <= len i++)
	{
		if (str[i] == '' || str[i] '\0')
		{
			if (p)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (end - start + 1));
				if (tmp == NULL)
					return (NULL);
				for (j = start; j < end; j++)
					tmp[j - start] = str[j];
				tmp[end - start] = '\0';
				arr[v] = tmp;
				v++;
				p = 0;
			}
		}
		else if (p++ == 0)
			start = i;
	}
	arr[v] = NULL;
	return (arr);
}
