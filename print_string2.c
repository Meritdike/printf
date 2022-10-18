#include "main.h"

/**
 * print_string2 - a function that prints out a string
 * Non printable characters (0 < ASCII value < 32 or >= 127) are printed this
 * way: \x, followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters)
 * @arg: va_list argument
 *
 * Return: number of printed characters
 */

int print_string2(va_list arg)
{
	char *string;
	size_t i = 0, j = 0, k = 0;
	char ch;
	char str[5] = {'\\', 'x'};
	char a[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
	'8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int length = 0, counter = -1, flag = 0;

	string = va_arg(arg, char *);
	if (!string)
	{
		string = "(null)";
		_puts(string);
	}
	else
	{
		for (i = 0; *(string + i) != '\0'; i++)
		{
			ch = *(string + i);
			if ((ch >= 0 && ch <= 31) || chk_non_printable(ch))
			{
				length = refactor(k, j, length, counter, flag, ch, str, a);
			}
			else
			{
				_putchar(ch);
				length++;
			}
		}
	}
	return (length);
}

int refactor(size_t k, size_t j, size_t length, int counter,
int flag, char ch, char str[5], char a[16])
{
	for (k = 0; k < 16; ++k)
	{
		for (j = 0; j < 16; ++j)
		{
			counter++;
			if (counter == ch)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	str[2] = a[k];
	str[3] = a[j];
	str[4] = '\0';
	_puts(str);
	return (++length);
}
/**
 * chk_non_printable - a function that check for non printable
 * character greater than 126, and return 1 if true, else 0
 * @ch: the charater to check
 *
 * Return: returns 1 if true, else returns 0
 */
int chk_non_printable(int ch)
{
	size_t i;
	int print[8] = {127, 129, 141, 143, 144, 157, 160, 173};

	for (i = 0; i < 8; i++)
	{
		if (ch == print[i])
			return (1);
	}
	return (0);
}
