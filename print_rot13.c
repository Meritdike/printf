#include "main.h"
/**
 * print_rot13 - prints a string using rot13 encription
 * @arg: va_list argument
 * Return: number of the string printed
 */

int print_rot13(va_list arg)
{
	char *s = va_arg(arg, char *);
	char lower[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char upper[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	register short i, j;

	if (!s)
		return (-1);
	for (j = 0; *(s + j); j++)
	{
		if (*(s + j) < 'A' || (*(s + j) > 'Z' && *(s + j) < 'a') || *(s + j) > 'z')
		{
			_putchar(*(s + j));
		} else
		{
			for (i = 0; i <= 52; i++)
				if (*(s + j) == lower[i])
				_putchar(upper[i]);
		}
	}
		return (j);
}
