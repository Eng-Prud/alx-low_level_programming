#include "main.h"

#define BUF_SIZE 1024

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

void copy_file_content(int fd_from, int fd_to)
{
	char buffer[BUF_SIZE];
	int read_result, write_result;

	while ((read_result = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		write_result = write(fd_to, buffer, read_result);
		if (write_result == -1)
		{
			dprintf(2, "Error: Can't write to file\n");
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (read_result == -1)
	{
		dprintf(2, "Error reading from file\n");
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}

void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close file descriptor\n");
		exit(100);
	}
}

int cp(const char *from, const char *to)
{
	int fd_from = open_source_file(from);
	int fd_to = open_destination_file(to);

	copy_file_content(fd_from, fd_to);

	close_files(fd_from, fd_to);

	return (0);
}
