#include "main.h"

/**
 * int_function - function to Prints an integer
 * @list: List of arguments
 * Return: The number of characters printed.
 */
int int_function(va_list list)
{
	int int_number;

	int_number = num_function(list);
	return (int_number);
}

/**
 * num_function - function to Prints number
 * @args: List of arguments
 * Return: The number of characters printed
 */
int num_function(va_list args)
{
	int n;
	int division;
	int lenght;
	unsigned int number;

	n = va_arg(args, int);
	division = 1;
	lenght = 0;

	if (n < 0)
	{
	lenght += _putchar('-');
	number = (unsigned int)(n * -1);
	}
	else
	{
	number = (unsigned int)n;
	}

	while (number / division > 9)
	{
	division *= 10;
	}

	while (division != 0)
	{
	lenght += _putchar('0' + number / division);
	number %= division;
	division /= 10;
	}

	return (lenght);
}
