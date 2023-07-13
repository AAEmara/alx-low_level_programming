#include "main.h"

/**
 * append_text_to_file - Appends text at the end of the file.
 *
 * @filename: Constant Pointer to Character value (string literal), which
 * is the path of the file.
 * @text_content: Pointer to Character value, which is the text to be appended
 * to the end of the text file.
 *
 * Return: -1 if it Fails.
 *	   1 if it Succeeds.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		fd = open(filename, O_RDWR | O_APPEND);
		if (fd < 0)
		{
			close(fd);
			return (-1);
		}
		else
		{
			bytes_written = write(fd, text_content,
					      strlen(text_content));
			if (bytes_written < 0)
				return (-1);

			close(fd);
			return (1);
		}
	}

}
