#include "main.h"

/**
 * handle_string - Prints a string
 * @list: List of arguments
 * Return: The number of characters printed.
 */
int handle_string(va_list list)
{
	int j;
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
	str = "(null)";

	for (j = 0; str[j] != '\0'; j++)
	_putchar(str[j]);

	return (j);
}
