#include "main.h"
/**
 * percent_char_check - % character check
 * @flag: value by reference
 * @character: character
 * Return: 1 if % character is printed
 */

int percent_char_check(int *flag, char character)
{
	int tmp = *flag;

	if (tmp == 2 && character == '%')
	{
		_putchar('%');
		return (1);
	}
	return (0);
}
