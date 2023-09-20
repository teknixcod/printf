#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define NULL_STRING "(null)"
#define NUL '\0'

/**
 * struct convert - defines a structure for symbols and functions
 *
 * @sym: The operator
 * @f: The function associated
 */
typedef struct convert
{
	char *sym;
	int (*f)(va_list);
} conver_t;

int _printf(const char *format, ...);
int _putchar(char c);
int format_function_handler(const char *format, conver_t f_list[],
				va_list arg_list);
int percent_func(va_list args);
int int_function(va_list args);
int char_function(va_list args);
int handle_string(va_list args);
int handle_binary(va_list args);
int func_unsigned_int(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_String(va_list args);
int print_pointer(va_list args);
int print_rev(va_list args);
int print_rot13(va_list args);
int num_function(va_list args);
unsigned int base_len(unsigned int number, int baselen);
char *rev_string(char *str);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsigned_number(unsigned int n);
int hex_check(int num, char x);
int hexadecimal_handler(unsigned long int num);
int isNonAlphaNumeric(char c);
int _puts(char *str);
char *convert(unsigned long int num, int base, int lowercase);

#endif
