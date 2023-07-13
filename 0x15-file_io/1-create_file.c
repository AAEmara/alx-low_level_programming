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
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	else if (text_content == NULL)
	{
		fd = creat(filename, S_IRUSR | S_IWUSR);
		if (fd < 0)
			return (-1);
		close(fd);
		return (1);
	}
	else
	{
		fd = open(filename, O_CREAT | O_EXCL | O_RDWR | O_TRUNC,
			  S_IRUSR | S_IWUSR);

		if (fd < 0)
			return (-1);

		else
		{
			bytes_written = write(fd, text_content,
					      strlen(text_content));
				if (bytes_written == -1)
				{
					close(fd);
					return (-1);
				}
				else
				{
					close(fd);
					return (1);
				}
		}
	}
}
