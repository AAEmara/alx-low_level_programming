#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Uses unix's library to write to the stdout a certain string.
 *
 * Return: 1 (STDOUT)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" ";
	char str1[] = "- Dora Korpar, 2015-10-19\n";

	write(2, str, sizeof(str) - 1);
	write(2, str1, sizeof(str1) - 1);

	return (1);
}
