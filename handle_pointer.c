#include "main.h"

/**
 *pointer_handler - Handles the 'p' conversion specifier
 *@args: The va_list containing the argument (a pointer)
 *
 *Return: The number of characters printed
 */
int pointer_handler(va_list args)
{
	unsigned long int ptr = (unsigned long int)va_arg(args, void *);

	if (ptr == 0)
		return (_printf("(nil)"));

	_putchar('0');
	_putchar('x');
	return (hexadecimal_handler(ptr) + 2);
}

