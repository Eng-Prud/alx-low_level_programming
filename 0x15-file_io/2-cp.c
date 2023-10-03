#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int write_result;
	char *current_char;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		current_char = text_content;
		while (*current_char != '\0')
		{
			write_result = write(fd, current_char, 1);
			if (write_result == -1)
			{
				close(fd);
				return (-1);
			}
			current_char++;
		}
	}
	close(fd);
	return (-1);
}
