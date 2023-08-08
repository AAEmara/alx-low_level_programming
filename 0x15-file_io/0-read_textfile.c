#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard
 * output.
 *
 * @filename: Pointer to a Constant Character Value, which represents the
 * file's name.
 * @letters: Unsigned Integer Value, which represents the number of letters
 * to be read and printed.
 *
 * Return: Number of letters read and printed (Success)
 *	   0 (Failure)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t buff_size;
	ssize_t bytes_written, bytes_read;
	char *buff = malloc(sizeof(char) * letters);

	if (buff == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	bytes_read = read(fd, buff, letters);

	if (bytes_read == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	buff_size = _strlen(buff);

	if (buff_size != letters)
		letters = buff_size;

	bytes_written = write(STDIN_FILENO, buff, letters);

	if (bytes_written == -1 || bytes_written != (ssize_t) letters)
	{
		close(fd);
		free(buff);
		return (0);
	}

	free(buff);
	close(fd);
	return (bytes_written);
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
