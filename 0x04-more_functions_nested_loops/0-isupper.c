/**
 * _isupper - checks for uppercase character
 *
 * @c: The character
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else if ((c >= 'a') && (c <= 'z'))
		return (0);

	return (0);
}
