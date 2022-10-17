#include "main.h"
/**
 * switching1 - function to print the format specifier data type
 * @c: the format specifier
 * @arg: va_list variable
 *
 * Return: number of printed characters
 */
int switching(char c, va_list arg)
{
	int counter = 0;

	switch (c)
	{
		case '%':
			counter += print_character(arg);
			break;
		case 'c':
			counter += print_character(arg);
			break;
		case 's':
			counter += print_string(arg);
			break;
		default:
			counter += -1;
	}
	return (counter);
}
