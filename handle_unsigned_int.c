#include "main.h"

/**
 * func_unsigned_int - Prints unsigned integers
 * @list: List of arguments
 * Return: The number of characters printed
 */
int func_unsigned_int(va_list list)
{
	unsigned int number;

	number = va_arg(list, unsigned int);

	if (number == 0)
	return (print_unsigned_number(number));

	if (number < 1)
	return (-1);

	return (print_unsigned_number(number));
}

/**
 * print_unsigned_number - function to Prints an unsigned number
 * @n: Unsigned integer to be printed
 * Return: The number of characters printed
 */
int print_unsigned_number(unsigned int n)
{
	int div;
	int lenght;
	unsigned int num;

	div = 1;
	lenght = 0;

	num = n;

	while (num / div > 9)
	{
	div *= 10;
	}

	while (div != 0)
	{
	lenght += _putchar('0' + num / div);
	num %= div;
	div /= 10;
	}

	return (lenght);
}
