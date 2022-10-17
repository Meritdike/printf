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
	int i, j;
	int count = 0;
	char character;
	char *string;
	va_list args;

	va_start(args, format);

	for (i = 0; *(format + i) != '\0'; ++i)
	{
		if (*(format + i) == '%' && *(format + i + 1) == 'c')
		{
			i++;
			character = va_arg(args, int);
			write(1, &character, 1);
		}
		else if (*(format + i) == '%' && *(format + i + 1) == 's')
		{
			i++;
			string = va_arg(args, char *);
			for (j = 0; *(string + j) != '\0'; ++j)
			{
				write(1, (string + j), 1);
				count++;
			}
			count--;
		}
		else if (*(format + i) == '\\' && *(format + i + 1) == 'n')
		{
			i++;
			write(1, "\n", 1);
		}
		else
		{
			write(1, (format + i), 1);
		}
		count++;
	}
	return (count);
}
