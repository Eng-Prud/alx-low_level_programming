#include "main.h"

#define BUF_SIZE 1024

/**
 * open_source_file - Opens the source file for reading
 * @from: The name of the source file
 * Return: File descriptor for the source file.
 */

int open_source_file(const char *from)
{
	int fd_from = open(from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	return (fd_from);
}

/**
 * open_destination_file - Opens the destination file for writing
 * @to: The name of the destination file
 * Return: File descriptor for the destination file.
 */

int open_destination_file(const char *to)
{
	int fd_to = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", to);
		exit(99);
	}
	return (fd_to);
}

/**
 * close_files - Closes the given file descriptors
 * @fd_from: File descriptor for the source file
 * @fd_to: File descriptor for the destination file
 */

void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close file descriptor\n");
		exit(100);
	}
}

/**
 * cp - Copies the content of a file to another file
 * @from: The source file
 * @to: The destination file
 * Return: 0 on success
 */

int cp(const char *from, const char *to)
{
	int fd_from = open_source_file(from);
	int fd_to = open_destination_file(to);
	char buffer[BUF_SIZE];
	int read_result, write_result;

	while ((read_result = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		write_result = write(fd_to, buffer, read_result);
		if (write_result == -1)
		{
			dprintf(2, "Error: Can't write to file\n");
			close_files(fd_from, fd_to);
			exit(99);
		}
	}

	if (read_result == -1)
	{
		dprintf(2, "Error reading from file\n");
		close_files(fd_from, fd_to);
		exit(98);
	}
	close_files(fd_from, fd_to);
	return (0);
}

/**
 * main - Entry point
 * @ac: counts args
 * @av: arguments
 * Return: 0 on SUCCESS
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	cp(av[1], av[2]);
	return (0);
}

