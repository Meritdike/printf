#include "main.h"
/**
 * _puts - A function that receives a string and prints to standard output
 * @string: the string
 *
 * Return: return 0 on success.
 */
int _puts(char *string)
{
	int i;

	for (i = 0; *(string + i) != '\0'; i++)
		_putchar(*(string + i));
	return (0);
}
