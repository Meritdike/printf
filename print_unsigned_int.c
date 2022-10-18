#include "main.h"
/**
 * print_unsigned_int - print unsigned integer
 * @arg: va_list parameter
 * @base: number base
 *
 * Return: number of characters to be printed
 */
int print_unsigned_int(va_list arg, int base)
{
	unsigned int value;
	char *string;

	value = va_arg(arg, unsigned int);
	string = base_converter("0123456789ABCDEF", value, base);
	_puts(string);

	return (length_of_string(string));
}
