#include "main.h"
/**
 * print_pointer - a function that prints th address in a pointer
 * @arg: va_list datatype argument
 *
 * Return: returns 1 on success
 */
int print_pointer(va_list arg)
{
	unsigned long int decimal, cache;
	int counter, tmp, i;
	char arr[100] = "0x";

	decimal = (unsigned long int)va_arg(arg, void*);
	cache = decimal;
	counter = 1;
	i = 0;

	if (!decimal)
	{
		_puts("(nil)");
		return (5);
	}
	while (cache)
	{
		cache /= 16;
		counter++;
	}
		arr[counter + 1] = '\0';

	while (decimal > 0)
	{
		tmp = (decimal % 16);
		if (tmp >= 0 && tmp <= 9)
			arr[counter] = ((char)(tmp + '0'));
		else
			arr[counter] = ((char)(tmp + 'W'));
		counter--;

		decimal /= 16;
	}

	while (*(arr + i) != '\0')
	{
		_putchar(*(arr + i));
		i++;
	}
	return (i);
}
