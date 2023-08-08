#include "main.h"

/**
 * main - Entry point
 *
 * @argc: Integer Value, for the count of arguments given to the program.
 * @argv: Pointer to an array of Pointers to Character Values, which
 * represents the arguments given to the program.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(argv[1], argv[2]);

	return (0);
}

/**
 * cp - Copies the content of a file to another file.
 *
 * @file_from: Pointer to Constant Character Value, represents the file to
 * copy from.
 * @file_to: Pointer to Constant Character Value, represents the file to
 * copy to.
 *
 * Return: Nothing.
 */
void cp(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t b_write, b_read;
	char *buff = malloc(sizeof(char) * 1024);
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, mode);
	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1 || (b_read = read(fd_from, buff, 1024) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
			, file_from);
		exit(98);
	}

	if (fd_to == -1 || (b_write = write(fd_to, buff, _strlen(buff)) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n" , file_to);
		exit(99);
	}
	
	close_to = close(fd_to);
	close_from = close(fd_from);

	if (close_from == -1 || close_to == -1)
	{
		if (close_from == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n"
				, fd_from);

		if (close_to == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n"
				, fd_to);
		exit(100);
	}
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
