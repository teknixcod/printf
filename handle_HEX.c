#include "main.h"

/**
 * HEX_handler - Prints a representation of a
 * decimal number on base16 Uppercase
 * @list: List of the arguments passed to the function
 * Return: Number of characters printed
 */

int HEX_handler(va_list list)
{
	unsigned int init;
	int len;
	int hex_a;
	char *hex_b;
	char *flip;

	init = va_arg(list, unsigned int);

	if (init == 0)
		return (_putchar('0'));
	if (init < 1)
		return (-1);
	len = base_len(init, 16);
	hex_b = malloc(sizeof(char) * len + 1);
	if (hex_b == NULL)
		return (-1);
	for (len = 0; init > 0; len++)
	{
		hex_a = init % 16;
		if (hex_a > 9)
		{
			hex_a = hex_check(hex_a, 'X');
			hex_b[len] = hex_a;
		}
		else
			hex_b[len] = hex_a + 48;
		init = init / 16;
	}
	hex_b[len] = '\0';
	flip = rev_string(hex_b);
	if (flip == NULL)
		return (-1);
	write_base(flip);
	free(hex_b);
	free(flip);
	return (len);
}
