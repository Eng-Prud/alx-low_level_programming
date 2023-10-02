#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * cp - Copies the content of a file to another file.
 * @from: The source file.
 * @to: The destination file.
 *
 * Return: 0 on success.
 */
int cp(const char *from, const char *to)
{
	int fd_from = -1, fd_to, read_result, write_result;
	char buffer[BUF_SIZE];

	if (from == NULL || to == NULL)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
		fd_from = open(from, O_RDONLY);
	}
		if (fd_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", from);
		exit(98);
	fd_to = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", to);
		close(fd_from);
		exit(99);
	}
	while ((read_result = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		write_result = write(fd_to, buffer, read_result);
		if (write_result == -1)
		{
			dprintf(2, "Error: Can't write to file %s\n", to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (read_result == -1)
	{
		dprintf(2, "Error reading from file %s\n", from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close file descriptor\n");
		exit(100);
	}
	return (0);
}

/**
 * main - Entry point
 * @ac: counts arguments
 * @av: arguments
 * Return: 0 success
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
