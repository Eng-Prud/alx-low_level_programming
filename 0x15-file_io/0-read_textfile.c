#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: string of chars
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	FILE *file;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}
	bytesRead = fread(buffer, 1, letters, file);

	if (bytesRead == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (bytesWritten == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (bytesWritten);
}
