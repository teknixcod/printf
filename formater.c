#include "main.h"

/**
 * format_reciever - Receives the main string and all the
 * necessary parameters to print a formated string.
 * @format: A string containing all the desired characters.
 * @f_list: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */

int format_reciever(const char *format, conver_t f_list[], va_list arg_list)
{
	int y, z, r_val, printed_chars;

	printed_chars = 0;
	for (y = 0; format[y] != '\0'; y++)
	{
		if (format[y] == '%')
		{
			for (z = 0; f_list[z].sym != NULL; z++)
			{
				if (format[y + 1] == f_list[z].sym[0])
				{
					r_val = f_list[z].f(arg_list);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (f_list[z].sym == NULL && format[y + 1] != ' ')
			{
				if (format[y + 1] != '\0')
				{
					_putchar(format[y]);
					_putchar(format[y + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			y += 1;
		}
		else
		{
			_putchar(format[y]);
			printed_chars++;
		}
	}
	return (printed_chars);
}

