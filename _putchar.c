#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * Description: _putchar uses a local buffer of 1024 to call write
 * as little as possible
 */
int _putchar(char c)
{
	static char buf[1024];
	static int j;

	if (c == -1 || j >= 1024)
	{
		write(1, &buf, j);
		j = 0;
	}
	if (c != -1)
	{
		buf[j] = c;
		j++;
	}
	return (1);
}
