#include "main.h"
/**
 * switching1 - function to print the format specifier data type
 * @c: the format specifier
 * @arg: va_list variable
 *
 * Return: number of printed characters
 */
int switching1(char c, va_list arg)
{
	int counter = 0;

	switch (c)
	{
		case '%':
			counter += print_character(arg);
			break;
		case 'b':
			counter += print_unsigned_int(arg, 2);
			break;
		case 'c':
			counter += print_character(arg);
			break;
		case 'd':
		case 'i':
			counter += print_signed_int(arg, 10);
			break;
		case 'o':
			counter += print_unsigned_int(arg, 8);
			break;
		default:
			counter += switching2(c, arg);
	}
	return (counter);
}

/**
 *switching2 - function to print the format specifier data type
 *@c: the format specifier
 *@arg: va_list variable
 *Return: number of printed characters
 */
int switching2(char c, va_list arg)
{
	int counter = 0;

	switch (c)
	{
		case 'R':
			counter += print_rot13(arg);
			break;
		case 's':
			counter += print_string(arg);
			break;
		case 'u':
			counter += print_unsigned_int(arg, 10);
			break;
		case 'x':
			counter += print_hexadecimal(arg, "0123456789abcdef");
			break;
		case 'X':
			counter += print_hexadecimal(arg, "0123456789ABCDEF");
			break;
		case 'p':
			counter += print_pointer(arg);
			break;
		default:
			counter += -1;
	}
	return (counter);
}
