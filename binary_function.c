include "main.h"

/**
 * handle_binary - Converts a number from base 10 to binary.
 * @list: List of arguments passed to this function.
 * Return: The length of the number printed.
 */
int handle_binary(va_list list)
{
	unsigned int number;
	int i, lenght;
	char *str;
	char *rev_str;

	number = va_arg(list, unsigned int);

	if (number == 0)
	return (_putchar('0'));

	if (number < 1)
	return (-1);

	lenght = base_len(number, 2);
	str = malloc(sizeof(char) * (lenght + 1));

	if (str == NULL)
	return (-1);

	for (i = 0; number > 0; i++)
	{
	if (number % 2 == 0)
	str[i] = '0';
	else
	str[i] = '1';

	number /= 2;
	}

	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
	{
	free(str);
	return (-1);
	}
	write_base(rev_str);
	free(str);
free(rev_str);
return (lenght);
}
