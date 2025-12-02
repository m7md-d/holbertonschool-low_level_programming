#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count_r, count_w = 0;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}
	count_r = read(fd, buf, letters);

	if (count_r != -1)
		count_w = write(STDOUT_FILENO, buf, count_r);

	close(fd);
	free(buf);

	if (count_w == -1 || count_w != count_r)
		return (0);
	return (count_r);
}
