#include "main.h"

/**
 * char_function - Prints a character
 * @list: List of arguments
 * Return: The number of characters printed (always 1).
 */
int char_function(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
