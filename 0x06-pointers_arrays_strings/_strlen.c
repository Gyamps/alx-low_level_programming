/**
 * _strlen - length of string
 *
 * @s: the string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; *s; i++)
	{
		len++;
		s++;
	}
	return (len);
}
