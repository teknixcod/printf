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
int format_receiver(const char *format, conver_t f_list[], va_list arg_list);
int percent_func(va_list args);
int int_function(va_list args);
int char_function(va_list args);
int handle_string(va_list args);
int handle_binary(va_list args);
int func_unsigned_int(va_list args);
int octa_handler(va_list args);
int hex_handler(va_list args);
int HEX_handler(va_list args);
int String_handler(va_list args);
int pointer_handler(va_list args);
int rev_handler(va_list args);
int rot13_handler(va_list args);


int num_function(va_list args);
unsigned int base_len(unsigned int num, int base);
char *rev_string(char *str);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsigned_number(unsigned int n);
int hex_check(int num, char x);
int print_hex_aux(unsigned long int num);
int isNonAlphaNumeric(char c);
int _puts(char *str);
char *convert(unsigned long int num, int base, int lowercase);


#endif
