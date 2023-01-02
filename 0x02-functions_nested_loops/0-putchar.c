#include <stdio.h>

int _putchar();

/**
* _putchar - A function that outputs "_putchar" followed by newline.
*
* @parameter: No parameters used.
*
* Description: This function is used to print the statement "_putchar"
* followed by a newline "\n" whenever the function is invoked.
*
* Return: Always 0 (Success).
*/
int _putchar()
{
	printf("_putchar\n");
	return (0);
}

/**
* main - Entry point of the program.
*
* @parameter: No parameters used.
*
* Description: This function calls the _putchar function.
*
* Return: Always 0 (Success).
*/
int main(void)
{
	_putchar();
	return (0);
}
