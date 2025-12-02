#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file and writes content to it.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write "fails", etc...).
 * The created file permissions are: rw-------.
 * If the file already exists, do not change the permissions.
 * If the file already exists, truncate it.
 * If filename is NULL return -1.
 * If text_content is NULL create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int i, e = 0, fd = 0;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i]; i++)
		;
	if (i)
		e = write(fd, text_content, i);
	
	close(fd);
	if (e == i)
		return (1);
	return (-1);
}
