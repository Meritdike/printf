/**
  * length_of_string - a function that returns the length of a string
 * @string: the string
 * Return: return the length
 */

int length_of_string(char *string)
{
	int length = 0;

	while (*string++)
		length++;
	return (length);
}
