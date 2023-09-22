#include "main.h"

/**
 *String_handler - Handles the custom 'S' specifier
 * @args: The va_list containing the argument
 *
 * Return: The number of characters printed
 */
int String_handler(va_list args)
{
	int i, count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = NULL_STRING;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += _printf("%02X", str[i]);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}

	return (count);
}
