#include "main.h"

/**
 * pointer_handler - Handles the %p conversion specifier
 * @args: The va_list containing the argument to be printed (a pointer)
 *
 * Return: The number of characters printed
 */

#include "main.h"

int pointer_handler(va_list args)
{
	unsigned long int address;
	char *hex_address;
	int printed_chars = 0;

	address = (unsigned long int)va_arg(args, void *);

	hex_address = convert(address, 16, 1);

	if (!hex_address)
		return (-1);

	printed_chars += _puts("0x");
	printed_chars += _puts(hex_address);

	free(hex_address);

	return (printed_chars);
}
