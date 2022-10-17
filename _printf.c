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

/*
	char __attribute__((unused)) percent;
	size_t __attribute__((unused)) i, j;
	size_t count = 0;
	char __attribute__((unused)) character;
	char __attribute__((unused)) *string;
	va_list __attribute__((unused)) args;


	va_start(args, format);
	for (i = 0; *(format + i) != '\0'; ++i)
	{
		if (*(format + i) == '%' && *(format + i + 1) == 'c')
		{
			character = (char)va_arg(args, size_t);
			write(1, &character, 1);
			i++;
		}
		else if (*(format + i) == '%' && *(format + i + 1) == 's')
		{
			i++;
			string = (char *)va_arg(args, char *);
			for (j = 0; *(string + j) != '\0'; ++j)
			{
				write(1, (string + j), 1);
				count++;
			}
			count--;
		}
		else if (*(format + i) == '%' && *(format + i + 1) == '%')
		{
			i++;
			percent = '%';
			write(1, &percent, 1);
		}
		else
		{
			write(1, (format + i), 1);
		}
		count++;
	}
	va_end(args);
	return (count);
}
*/

/*
size_t check(const char *format, va_list args)
{
	va_start(args, format);
	size_t __attribute__((unused)) format_cnt = 0;
	size_t __attribute__((unused)) arg_cnt = 0;

	if (*(format + i) == '%' && *(format + i + 1) == 's')

	va_end(args);
	return (0);
}
*/

