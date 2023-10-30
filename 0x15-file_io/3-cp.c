#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * error_exit - prints error message
 * @code: exit code
 * @msg: error message
 */

void error_exit(int code, const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 on success, appropriate exit code on failure
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t read_bytes, write_bytes;
	char buffer[BUF_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file");

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to file");

	while ((read_bytes = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
	write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1 || write_bytes != read_bytes)
		error_exit(99, "Error: Can't write to file");
	}

	if (read_bytes == -1)
		error_exit(98, "Error: Can't read from file");

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close file descriptor");

	if (close(fd_to) == -1)
	error_exit(100, "Error: Can't close file descriptor");

	return (0);
}

