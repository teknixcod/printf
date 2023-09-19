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
        {"%", percent_func},
        {"d", int_function},
        {"i", int_function},
        {"c", char_function},
        {"s", handle_string},
        {"b", handle_binary},
        {"u", func_unsigned_int},
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
