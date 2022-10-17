#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: a pointer to a char
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list Args;
	const char *Str;
	int counter = 0;

	if (format)
	{
		va_start(Args, format);
		Str = format;
		counter = format_string(Args, Str);
		va_end(Args);
		return (counter);
	}
	return (-1);
}
