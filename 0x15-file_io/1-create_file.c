#include "main.h"

/**
 * create_file - Creates a file.
 *
 * @filename: Pointer to a Constant Character Value, which represents the
 * name of the file to create.
 * @text_content: Pointer to Character Value, which represents the null
 * terminated string to be printed.
 *
 * Return: 1 (Success)
 *	   -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, _strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}

		close(fd);
		return (1);
	}

	close(fd);
	return (1);
}

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer that points to a Character value.
 *
 * Return: String Length (Always +ve or Zero).
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
