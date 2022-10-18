/**
 * base_converter - number base converter
 * @hexa_dec: hexadecimal number
 * @base: the number base to convert to.
 * @number: the number
 * Return: a string of the formatted data.
 */

char *base_converter(char hexa_dec[], unsigned int number, int base)
{
	int index = 0;
	char *pointer;
	static char cache[50];

	pointer = &cache[49];
	*pointer = '\0';

	do {
		index = number % base;
		number /= base;

		*--pointer = hexa_dec[index];
	}
	while (number != 0)
		return (pointer);
}
