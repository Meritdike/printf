#include "main.h"
/**
 * print_signed_int - print signed integer
 * @arg: va_list argument
 * @base: number base
 * Return: number of printed characters
 */

int print_signed_int(va_list arg, int base)
{
	int integer = 0, counter = 0;
	char *value;

	integer = va_arg(arg, int);

	if (integer < 0)
	{
		integer = -(integer);
		_putchar('-');
		counter += 1;
	}

	value = base_converter("0123456789ABCDEF", integer, base);
		_puts(value);
	return (counter + length_of_string(value));
}
