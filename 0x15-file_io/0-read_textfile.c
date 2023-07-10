#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard
 * output.
 *
 * @filename: Pointer to Character value (string), which represents the path
 * to the file that needs to be read.
 * @letters: size_t defined data type, that represents the number of
 * characters to be read from the text file and printed.
 *
 * Return: 0 if filename parameter is NULL.
 *	   0 if it fails or doesn't write the expected amount of bytes.
 *	   Actual number of letters it should read and print if Succeeded.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *txt = malloc(sizeof(char) * letters);
	ssize_t chars_write, chars_read;

	if (filename == NULL)
		return (0);
	/**
	 * Opening the file and returning the file descriptor number
	 */
	fd = open(filename, O_RDONLY);
	if (fd == 0)
		return (0);

	/**
	 * Reading the file and returning the number of characters read
	 */
	chars_read = read(fd, txt, letters);
	if (chars_read == 0)
		return (0);
	/**
	 * Writing the text that was read from the file to the standard
	 * output stream.
	 */
	if (letters > strlen(txt))
		chars_write = write(1, txt, strlen(txt));
	else
		chars_write = write(1, txt, letters);

	if (chars_write == 0)
		return (0);

	close(fd);
	free(txt);
	return (chars_write);
}
