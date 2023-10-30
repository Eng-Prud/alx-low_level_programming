#include "main.h"
#include <stddef.h>

/**
 * _strlen - counts the length of a string
 * @str: used string
 * Return: length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: content to be append
 * Return: 1 on success, -1 on failure -1 if filename is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, write_to;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_to = write(file, text_content, _strlen(text_content));
		if (write_to == -1)
		{
			close(file);
			return (-1);
		}
		close(file);
		return (1);
	}
	else
	{
		close(file);
		return (1);
	}
}
