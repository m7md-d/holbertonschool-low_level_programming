#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * close_file - Closes file descriptors and handles errors.
 * @fd1: The first file descriptor to close.
 * @fd2: The second file descriptor to close (or -1 if not needed).
 *
 * Description: If close fails, it prints an error and exits with code 100.
 */
void close_file(int fd1, int fd2)
{
	int c;

	c = close(fd1);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (fd2 != -1)
	{
		c = close(fd2);

		if (c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
			exit(100);
		}
	}
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success.
 * Exit codes: 97 (Arg count), 98 (Read), 99 (Write), 100 (Close).
 */
int main(int argc, char **argv)
{
	char buf[1024];
	int fd1, fd2, r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_file(fd1, -1);
		exit(99);
	}
	while ((r = read(fd1, buf, 1024)) > 0)
	{
		w = write(fd2, buf, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file(fd1, fd2);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close_file(fd1, fd2);
		exit(98);
	}
	close_file(fd1, fd2);
	return (0);
}
