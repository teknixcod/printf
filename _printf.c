#include "main.h"


/**
 * _printf - Custom printf implementation
 * @format: A string containing format specifiers
 * @...: Variable number of arguments to format and print
 *
 * Return: The total number of characters printed
 */
int _printf(const char *format, ...)
{
    int printed_chars;
    conver_t f_list[] = {
        {"%", print_percent},
        {"d", print_integer},
        {"i", print_integer},
        {"c", print_char},
        {"s", string_handler},
        {"b", print_binary},
        {"u", print_unsigned_integer},
        {"o", octa_handler},
        {"x", hex_handler},
        {"X", HEX_handler},
        {"S", String_handler},
        {"p", pointer_handler},
        {"r", rev_handler},
        {"R", rot13_handler},
        {NULL, NULL},
    };
    va_list arg_list;


    if (format == NULL)
        return (-1);


    va_start(arg_list, format);
    printed_chars = format_receiver(format, f_list, arg_list);
    va_end(arg_list);


    return (printed_chars);
}
