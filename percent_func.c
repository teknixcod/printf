#include "main.h"

/**
 * percent_func - function to Prints a percent symbol
 * @list: List of arguments (unused)
 * Return: The number of characters printed (always 1).
 */
int percent_func(__attribute__((unused)) va_list list)
{
	_putchar('%');
	return (1);
}
