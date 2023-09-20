#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1 is returned,
 * and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - function to Prints a string to stdout
 * @str: Pointer to the string to print
 *
 * Return: The number of characters written (excluding the null terminator)
 */
int _puts(char *str)
{
	int len = 0;

	while (str[len])
	{
	_putchar(str[len]);
	len++;
	}

	return (len);
}
