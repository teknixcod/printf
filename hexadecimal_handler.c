#include "main.h"

/**
 * hexadecimal_handler - Prints a hexadecimal number.
 * @num: Argument.
 * Return: The number of characters printed.
 */
int hexadecimal_handler(unsigned long int num)
{
	long int len;
	long int *array;
	long int count = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
	num /= 16;
	count++;
	}
	count++;
	array = malloc(count * sizeof(long int));

	for (len = 0; len < count; len++)
	{
	array[len] = temp % 16;
	temp /= 16;
	}

	for (len = count - 1; len >= 0; len--)
	{
	if (array[len] > 9)
	array[len] = array[len] + 39;

	_putchar(array[len] + '0');
	}

	free(array);
	return (count);
}
