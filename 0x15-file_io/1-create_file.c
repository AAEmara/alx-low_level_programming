#include "main.h"

/**
 * create_file - Creates a file.
 *
 * @filename: Constant Pointer to Character value (string literal), which is
 * the file name to create.
 * @text_content: Pointer to Character value (string), to be written in the
 * file.
 *
 * Return: 1 if Succeeded.
 *	   -1 if Failed.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_written;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT|O_EXCL, S_IRUSR|S_IWUSR);
	printf("Before fd < 0, fd = %d\n", fd);
	if (fd < 0)
	{
		if (fd == EEXIST)
			fd = creat(filename, O_CREAT|O_RDWR|O_TRUNC);
	}
	else
	{
		fd = creat(filename, S_IRUSR|S_IWUSR);
	}

	if (text_content == NULL)
		bytes_written = write(fd, text_content, 0);
	else
		bytes_written = write(fd, text_content, strlen(text_content));

	if (bytes_written == 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
