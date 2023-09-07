#include "main.h"
#include <stdlib.h>

/**
 * *strtow - function that splits a string into words
 * @str: string to be split
 * Return: NULL if function fails
 */

char **strtow(char *str)
{
	int len = 0;
	char **wordarray;
	int word_index = 0;
	int p;
	int m = p;
	int word_length = m - p;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		while (str[len] == ' ' && str[len] != '\0')
			len++;
	}
	if (str[len] != ' ')
	{
		word++;
		while (str[len] != ' ' && str[len] != '\0')
		{
			len++;
		}
	}


	wordarray = (char **)malloc((word + 1) * sizeof(char *))
		if (wordarray == NULL)
			return (NULL);
	while (str[p] != '\0')
	{
		while (str[p] == ' ' && str[p] != '\0')
			p++;
		if (str[p] != ' ')
		{
			while (str[m] != ' ' && str[m] != '\0')
				m++;
			wordarray[word_index] = (char *)malloc((word_lenth + 1) * sizeof(char));
		if (wordarray[word_index] == NULL)
		{
			for (n = 0; n < word_index; n++)
				free(wordarray[n]);
			free(wordarray);
			return (NULL);
		}
		strncpy(wordarray[word_index], &str[i], word_length);
		wordarray[word_index][word_length] = '\0';
		word_index++;
		p = m;
		}
	}
	wordarray[word_index] = NULL;
	return(wordarray);
}
