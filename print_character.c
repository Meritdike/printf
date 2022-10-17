#include "main.h"
/**
 * print_character - prints a character
 * @arg: va_list parameter
 * Return: return 1 on success
 */

int print_character(va_list arg)
{
	_putchar((int)va_arg(arg, int));
		return (1);
}
