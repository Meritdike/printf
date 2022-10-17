#include "main.h"
/**
 * print_string - a function that prints out a string
 * @arg: va_list argument
 *
 * Return: number of printed characters
 */
int print_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);
	if (!string)
	{
		string = "(null)";
		_puts(string);

	} else
	{
		_puts(string);
	}

	return (length_of_string(string));
}
