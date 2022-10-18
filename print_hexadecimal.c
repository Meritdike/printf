#include "main.h"
/**
 * print_hexadecimal - function takes 0123456789ABCDEF or 0123456789abcdef
 * in representation parameter for print hexadecimal format
 * @arg: va_list parameter
 * @rep: pointer parameter
 * Return: number of characters printed
 */

int print_hexadecimal(va_list arg, char *rep)
{
	unsigned int i = 0;
	char *result;

	i = va_arg(arg, unsigned int);
	result = base_converter(rep, i, 16);
	_puts(result);

	return (length_of_string(result));
}
