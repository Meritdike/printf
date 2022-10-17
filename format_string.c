#include "main.h"

/**
 * format_string - a function that accepts a va_list variable and formats Str
 * @Args: va_list argument
 * @Str: String to format
 *
 * Return: Number of characters to be printed
 */

int format_string(va_list Args, const char *Str)
{
	int i = 0, sentinel = 0, counter2 = 0, counter = 0,
	percentage_counter = 0, len = length_of_string((char *)Str);

	while (i < len && *Str != '\0')
	{
		char character = Str[i];

		if (character == '%')
		{
			i++, sentinel++;
			character = Str[i];
			if (character == '\0' && len == 1)
				return (-1);
			if (character == '\0') 
				return (counter);
			if (character == '%')
			{
				sentinel++;
				percentage_counter = percent_char_check(&sentinel, character);
				counter += percentage_counter;
			}
			else
			{
				counter2 = switching(character, Args);
				if (counter2 >= 0 && counter2 != -1)
				{
					i++, character = Str[i];
					if (character == '%')
						sentinel--;
					counter = counter + counter2;
				}
				if (counter2 == -1 && character != '\n')
					counter += _putchar('%');
			}
		}
		if (character != '\0' && character != '%')
			counter += _putchar(character);
		i++;
	}
	return (counter);
}
