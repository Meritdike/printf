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
		case '\n':
			counter += _putchar('%');
			counter += _putchar('\n');
			break;
		case '\t':
			counter += _putchar('%');
			counter += _putchar('\t');
			break;
		case '\"':
			counter += _putchar('%');
			counter += _putchar('\"');
			break;
		case '\'':
			counter += _putchar('%');
			counter += _putchar('\'');
			break;
		case '\a':
			counter += _putchar('%');
			counter += _putchar('\a');
			break;
		case '\b':
			counter += _putchar('%');
			counter += _putchar('\b');
			break;
		case '\f':
			counter += _putchar('%');
			counter += _putchar('\f');
			break;
		case '\r':
			counter += _putchar('%');
			counter += _putchar('\r');
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
		case '\v':
			counter += _putchar('%');
			counter += _putchar('\v');
			break;
		case '\\':
			counter += _putchar('%');
			counter += _putchar('\\');
			break;
		case 'c':
			counter += print_character(arg);
			break;
		case 's':
			counter += print_string(arg);
			break;
		case 'd':
		case 'i':
			counter += print_signed_int(arg, 10);
			break;
		case 'b':
			counter += print_unsigned_int(arg, 2);
			break;
		default:
			counter += switching3(c, arg);
	}
	return (counter);
}

/**
 *switching3 - function to print the format specifier data type
 *@c: the format specifier
 *@arg: va_list variable
 *Return: number of printed characters
 */

int switching3(char c, va_list arg)
{
	int counter = 0;

	switch (c)
	{
		case 'u':
			counter += print_unsigned_int(arg, 10);
			break;
		case 'o':
			counter += print_unsigned_int(arg, 8);
			break;
		case 'x':
			counter += print_hexadecimal(arg, "0123456789abcdef");
			break;
		case 'X':
			counter += print_hexadecimal(arg, "0123456789ABCDEF");
			break;
		case 'S':
			counter += print_string2(arg);
			break;
		case 'p':
			counter += print_pointer(arg);
			break;
		case 'R':
			counter += print_rot13(arg);
			break;
		default:
			counter += -1;
	}
	return (counter);
}
