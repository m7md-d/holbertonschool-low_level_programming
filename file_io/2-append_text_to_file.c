#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 * Do not create the file if it does not exist.
 * If filename is NULL return -1.
 * If text_content is NULL, do not add anything to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, e = 0, fd = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		e = write(fd, text_content, i);
	}
	close(fd);
	if (e == i)
		return (1);
	return (-1);
}
