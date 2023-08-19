#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len_b = 0, i, j;
	unsigned int sum = 0;

	if (b == NULL)
		return (sum);

	for (i = 0; b[i]; i++)
		len_b++;
	len_b -= 1;

	j = 0;
	while (b[j])
	{
		if ((b[j] != '0') && (b[i] != '1'))
			return (sum);

		if (b[i] == '1')
			sum += (1 * (1 << len_b));
		j++;
		len_b--;
	}

	return (sum);
}
